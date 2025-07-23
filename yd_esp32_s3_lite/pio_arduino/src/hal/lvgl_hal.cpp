#include "lvgl_hal.h"
#include "lvgl.h"

#include "ST7306_LCD.h"
#include <Arduino.h>

const uint32_t lvBufferSize = ST7306_WIDTH * ST7306_HEIGHT /6;
uint8_t lvBuffer[lvBufferSize];

static lv_display_t *lvDisplay;

/* Tick source, tell LVGL how much time (milliseconds) has passed */
static uint32_t my_tick(void)
{
  return millis();
}

static void my_disp_flush(lv_disp_t *disp_drv, const lv_area_t *area, unsigned char *color_p) {
    int16_t x, y;
    uint16_t *colorPtr = (uint16_t *) color_p;
    
    for (y = area->y1; y <= area->y2; y++) {
        for (x = area->x1; x <= area->x2; x++) {
            st7306Lcd.drawPixel(x, y, *colorPtr);
            colorPtr++;
        }
    }
    st7306Lcd.refresh();
    
    lv_disp_flush_ready(disp_drv);
}

void hal_setup(void)
{
  st7306Lcd.begin();
  st7306Lcd.fillScreen(0b11111);
  st7306Lcd.refreshReal();

  /* Set the tick callback */
  lv_tick_set_cb(my_tick);

  /* Create LVGL display and set the flush function */
  lvDisplay = lv_display_create(ST7306_WIDTH, ST7306_HEIGHT);
  lv_display_set_rotation(lvDisplay, LV_DISPLAY_ROTATION_180);
  
  lv_display_set_color_format(lvDisplay, LV_COLOR_FORMAT_RGB565);
  lv_display_set_flush_cb(lvDisplay, my_disp_flush);
  lv_display_set_buffers(lvDisplay, lvBuffer, NULL, lvBufferSize, LV_DISPLAY_RENDER_MODE_PARTIAL);
  // lv_display_set_rotation(lvDisplay, LV_DISPLAY_ROTATION_180);

  /* Set the touch input function */
  // lvInput = lv_indev_create();
  // lv_indev_set_type(lvInput, LV_INDEV_TYPE_POINTER);
  // lv_indev_set_read_cb(lvInput, my_touchpad_read);
}


void hal_loop(void)
{
  /* NO while loop in this function! (handled by framework) */
  lv_timer_handler(); // Update the UI-
  delay(5);
}
