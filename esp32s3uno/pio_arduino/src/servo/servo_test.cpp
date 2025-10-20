#include <Arduino.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <WebServer.h>
#include <ESPmDNS.h>

#include <uri/UriBraces.h>
#include <uri/UriRegex.h>

const char *ssid = "hhhhh_24g";
const char *password = "flycat3100";

WebServer server(80);

uint8_t servo1=13;

#define PWM_FREQ 200
#define PWM_RESO_INDEX 12
#define PWM_RESO (pow(2, PWM_RESO_INDEX))
#define DEGREE_TO_TIME(D) ((0.5f)+(D)/90.0f)
#define PWM_DUTY_RATE(D) ((DEGREE_TO_TIME(D))/(1000.0f/(PWM_FREQ)) * PWM_RESO)

static void servo_roate(uint8_t channel, uint8_t degree)
{
  degree = degree > 180 ? 180:degree; 
  ledcWrite(channel, (int)PWM_DUTY_RATE(degree));
}

void servo_self_test(uint8_t c)
{
  for (int i=0;i<=180; i+=10)
  {
    servo_roate(c, i);
    delay(10);
  }
  delay(500);
  for (int i=180;i>=0; i-=10)
  {
    servo_roate(c, i);
    delay(10);
  }

}

void setup() 
{            
  Serial.begin(115200);
  delay(10); 

  Serial.printf("servo pwm freq:%d, resolution index:%d, resolution:%d\n", PWM_FREQ, PWM_RESO_INDEX, PWM_RESO);
  
  ledcAttachPin(servo1, 1); // assign RGB led pins to channels
  servo_roate(1, 0);
  
  ledcSetup(1, PWM_FREQ, PWM_RESO_INDEX);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.println("");

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  if (MDNS.begin("esp32")) {
    Serial.println("MDNS responder started");
  }

  server.on(F("/"), []() {
    server.send(200, "text/plain", "hello from esp32!");
  });

  server.on(UriBraces("/servo/{}"), []() {
    String servo = server.pathArg(0);
    server.send(200, "text/plain", "servo: '" + servo + "' online");
    servo_self_test(servo.toInt());
  });

  server.on(UriRegex("^\\/servo\\/([0-9]+)\\/degree\\/([0-9]+)$"), []() {
    String servo = server.pathArg(0);
    String degree = server.pathArg(1);
    server.send(200, "text/plain", "servo: '" + servo + "' set degree: '" + degree + "'");
    servo_roate(servo.toInt(), degree.toInt());
  });

  server.on(UriRegex("^\\/servo\\/([0-9]+)\\/test$"), []() {
    String servo = server.pathArg(0);
    server.send(200, "text/plain", "servo: '" + servo + "' test");
    for (int i=0; i<10; i++) {
      servo_self_test(servo.toInt());
    }
  });

  server.begin();
  Serial.println("HTTP server started");

}

void loop()
{
  // for (int i=0;i<=180; i+=10)
  // {
  //   servo_roate(1, i);
  //   delay(50);
  // }
  // for (int i=180;i>=0; i-=10)
  // {
  //   servo_roate(1, i);
  //   delay(50);
  // }
  server.handleClient();
  delay(2);//allow the cpu to switch to other tasks
}
