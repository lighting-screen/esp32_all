/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

// Set LED_BUILTIN if it is not defined by Arduino framework
// #ifndef LED_BUILTIN
//     #define LED_BUILTIN 13
// #endif
#define LED_BUILTIN 13

void setup()
{
  // initialize LED digital pin as an output.
  uint32_t timeout_end = millis() + 2000;
  Serial.begin(115200);
  while(!Serial && timeout_end > millis()) {}  //wait until the connection to the PC is established
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  // wait for a second
  delay(1000);
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
   // wait for a second
  delay(1000);
  Serial.printf("build in led is %d \n", LED_BUILTIN);
}

