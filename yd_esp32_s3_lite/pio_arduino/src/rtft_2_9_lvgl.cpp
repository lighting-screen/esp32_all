#include "lvgl.h"
#include "lvgl_hal.h"

// #include "demos/lv_demos.h"
#include "lv_demo_widgets.h"
#include <Arduino.h>
// #include "vt323.c"

extern const lv_font_t VT323;
extern const lv_font_t VT323_40;

void lv_helloworld(void)
{
    /*Change the active screen's background color*/
    lv_obj_set_style_bg_color(lv_screen_active(), lv_color_hex(0x003a57), LV_PART_MAIN);

    /*Create a white label, set its text and align it to the center*/
    lv_obj_t * label = lv_label_create(lv_screen_active());
    lv_label_set_recolor(label, true);
    // lv_label_set_text(label, "Hello world");
    lv_label_set_text_fmt(label,
    "#ff0000 H##00ff00 E##0000ff L##ffff00 L##ff00ff O#"
    " #00ffff W##ffffff O##ff0000 R##00ff00 L##0000ff D#");
    // lv_label_set_text_fmt(label,
    // "#0000ff H#0000ff E#0000ff L#ff00ff L#ff00ff O#ff00ff !");
    lv_obj_set_style_text_font(label, &VT323_40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(lv_screen_active(), lv_color_hex(0xffffff), LV_PART_MAIN);
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);
}


void setup() {
  lv_init();
  hal_setup();
  // lv_demo_widgets();
  // lv_demo_benchmark();
  // lv_demo_stress();
  lv_helloworld();
}

void loop() {
  hal_loop();  /* Do not use while loop in this function */
}
