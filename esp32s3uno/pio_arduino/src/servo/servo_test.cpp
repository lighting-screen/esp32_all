#include <Arduino.h>

uint8_t servo1=14;

#define PWM_FREQ 400
#define PWM_RESO_INDEX 12
#define PWM_RESO (pow(2, PWM_RESO_INDEX))
#define DEGREE_TO_TIME(D) ((0.5f)+(D)/90.0f)
#define PWM_DUTY_RATE(D) ((DEGREE_TO_TIME(D))/(2.5f) * PWM_RESO)

static void servo_roate(uint8_t channel, uint8_t degree)
{
  
  // Serial.printf("duty time:%f, duty value:%f\r\n", DEGREE_TO_TIME(degree), PWM_DUTY_RATE(degree));
  ledcWrite(channel, (int)PWM_DUTY_RATE(degree));
}

void setup() 
{            
  Serial.begin(115200);
  delay(10); 

  Serial.printf("servo pwm freq:%d, resolution index:%d, resolution:%d\n", PWM_FREQ, PWM_RESO_INDEX, PWM_RESO);
  
  ledcAttachPin(servo1, 1); // assign RGB led pins to channels
  
  ledcSetup(1, PWM_FREQ, PWM_RESO_INDEX);
}

void loop()
{
  for (int i=0;i<=180; i+=10)
  {
    servo_roate(1, i);
    delay(50);
  }
  for (int i=180;i>=0; i-=10)
  {
    servo_roate(1, i);
    delay(50);
  }
}
