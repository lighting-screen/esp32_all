/**
 * @file lv_demo_widgets.h
 *
 */

#ifndef LV_DEMO_WIDGETS_H
#define LV_DEMO_WIDGETS_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "src/draw/lv_draw.h"
#include "src/draw/lv_draw_triangle.h"

#if LV_USE_GRID == -1
#error "LV_USE_GRID needs to be enabled"
#endif

#if LV_USE_FLEX == 0
#error "LV_USE_FLEX needs to be enabled"
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/
void lv_demo_widgets(void);
void lv_demo_widgets_start_slideshow(void);

/**********************
 *      MACROS
 **********************/


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_DEMO_WIDGETS_H*/
