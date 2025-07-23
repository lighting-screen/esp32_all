#include "lvgl.h"
#include "lvgl_hal.h"

// #include "demos/lv_demos.h"
#include "lv_demo_widgets.h"
#include <Arduino.h>


void setup() {
  lv_init();
  hal_setup();
  lv_demo_widgets();
  // lv_demo_benchmark();
  // lv_demo_stress();
}

void loop() {
  hal_loop();  /* Do not use while loop in this function */
}
