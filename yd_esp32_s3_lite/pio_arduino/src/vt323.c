/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: --bpp 1 --size 20 --no-compress --stride 1 --align 1 --font VT323-Regular.ttf --range 32-127 --format lvgl -o VT323.c
 ******************************************************************************/

#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif



#ifndef VT323_T
#define VT323_T 1
#endif

#if VT323_T

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xc,

    /* U+0022 "\"" */
    0xde, 0xf6,

    /* U+0023 "#" */
    0x6c, 0xdb, 0xfb, 0x66, 0xcd, 0x9b, 0x7f, 0x6c,
    0xd8,

    /* U+0024 "$" */
    0x30, 0x61, 0xf7, 0xbf, 0x1e, 0x1c, 0x3e, 0x36,
    0x6f, 0xdb, 0xa7, 0xc6, 0xc, 0x0,

    /* U+0025 "%" */
    0x66, 0xcb, 0xb3, 0xc1, 0x2, 0xb, 0x16, 0x7e,
    0x9b, 0x30,

    /* U+0026 "&" */
    0x38, 0xb3, 0x61, 0xbd, 0xfb, 0xf6, 0x6e, 0xdd,
    0xab, 0xd8,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x21, 0x25, 0xb6, 0xd9, 0x24, 0x40,

    /* U+0029 ")" */
    0x80, 0x42, 0x23, 0x33, 0x33, 0x24, 0x48,

    /* U+002A "*" */
    0x30, 0xcf, 0xcc, 0x33, 0xf3, 0xc,

    /* U+002B "+" */
    0x30, 0xc3, 0x3f, 0x30, 0xc3, 0xc,

    /* U+002C "," */
    0xff, 0xf0,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xfc,

    /* U+002F "/" */
    0x6, 0x8, 0x30, 0x40, 0x83, 0x4, 0x18, 0x30,
    0x61, 0x86, 0xc, 0x18, 0x0,

    /* U+0030 "0" */
    0x31, 0x24, 0xb3, 0xcf, 0x3c, 0xf3, 0x48, 0x3,
    0x0,

    /* U+0031 "1" */
    0x30, 0xc7, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xcf,
    0xc0,

    /* U+0032 "2" */
    0x7b, 0x30, 0xc3, 0x8, 0x63, 0x18, 0x61, 0x8f,
    0xc0,

    /* U+0033 "3" */
    0x7b, 0x30, 0xc3, 0x8, 0xe0, 0xc3, 0xcd, 0x27,
    0x80,

    /* U+0034 "4" */
    0x1c, 0x18, 0xb1, 0x64, 0xc9, 0xbf, 0x86, 0xc,
    0x18, 0x30,

    /* U+0035 "5" */
    0xff, 0xc, 0x36, 0xcb, 0xb0, 0xc3, 0xcd, 0x27,
    0x80,

    /* U+0036 "6" */
    0x38, 0xc, 0x30, 0xc3, 0xec, 0xf3, 0xcc, 0x43,
    0x0,

    /* U+0037 "7" */
    0xfc, 0x30, 0xc6, 0x18, 0x63, 0xc, 0x61, 0x86,
    0x0,

    /* U+0038 "8" */
    0x76, 0xf7, 0xb5, 0x3b, 0x7b, 0xda, 0x9c,

    /* U+0039 "9" */
    0x33, 0x6d, 0xb7, 0x4d, 0xf0, 0xc3, 0x18, 0x7,
    0x0,

    /* U+003A ":" */
    0xfc, 0x3, 0xf0,

    /* U+003B ";" */
    0xfc, 0x3, 0xff, 0xc0,

    /* U+003C "<" */
    0x18, 0x8c, 0xc4, 0x61, 0x84, 0x30, 0x86,

    /* U+003D "=" */
    0xf8, 0x1, 0xf0,

    /* U+003E ">" */
    0xc2, 0x18, 0x61, 0xc, 0xc4, 0x62, 0x30,

    /* U+003F "?" */
    0x7b, 0x30, 0xc3, 0x8, 0x63, 0x0, 0x0, 0x3,
    0x0,

    /* U+0040 "@" */
    0x39, 0x2c, 0xf3, 0xdf, 0xdf, 0x7d, 0xdf, 0xc,
    0x10, 0x3c,

    /* U+0041 "A" */
    0x30, 0x70, 0xe3, 0x6e, 0xd9, 0xbf, 0x62, 0xc7,
    0x8f, 0x18,

    /* U+0042 "B" */
    0xfd, 0x8f, 0x1e, 0x3c, 0x5f, 0xb1, 0xe3, 0xc7,
    0x8b, 0xf0,

    /* U+0043 "C" */
    0x3c, 0x49, 0x9e, 0xc, 0x18, 0x30, 0x60, 0x66,
    0x48, 0xf0,

    /* U+0044 "D" */
    0xf9, 0x9b, 0x36, 0x3c, 0x78, 0xf1, 0xe3, 0xcd,
    0x93, 0xe0,

    /* U+0045 "E" */
    0xfe, 0x31, 0x8c, 0x7f, 0x18, 0xc6, 0x3e,

    /* U+0046 "F" */
    0xfe, 0x31, 0x8c, 0x7f, 0x18, 0xc6, 0x30,

    /* U+0047 "G" */
    0x3c, 0xcd, 0x6, 0xc, 0x19, 0xf1, 0xe3, 0x66,
    0x48, 0xf0,

    /* U+0048 "H" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x7f, 0xf1, 0xe3, 0xc7,
    0x8f, 0x18,

    /* U+0049 "I" */
    0xf6, 0x66, 0x66, 0x66, 0x66, 0xf0,

    /* U+004A "J" */
    0x3c, 0x61, 0x86, 0x18, 0x61, 0x86, 0xd9, 0x47,
    0x0,

    /* U+004B "K" */
    0xc7, 0x8b, 0x36, 0xcd, 0x1e, 0x36, 0x64, 0xcd,
    0x8b, 0x18,

    /* U+004C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xf,
    0xc0,

    /* U+004D "M" */
    0xc7, 0x8f, 0xbf, 0xbf, 0x7e, 0xfd, 0xfb, 0xf7,
    0xef, 0x18,

    /* U+004E "N" */
    0xcf, 0xbe, 0xfb, 0xef, 0xfd, 0xf7, 0xdf, 0x3c,
    0xc0,

    /* U+004F "O" */
    0x39, 0x9b, 0x36, 0x3c, 0x78, 0xf1, 0xe3, 0xcc,
    0x90, 0xe0,

    /* U+0050 "P" */
    0xfd, 0x8f, 0x1e, 0x3c, 0x5f, 0xb0, 0x60, 0xc1,
    0x83, 0x0,

    /* U+0051 "Q" */
    0x39, 0x9b, 0x36, 0x3c, 0x78, 0xf1, 0xe3, 0xcc,
    0x90, 0xe0, 0x60, 0xc0, 0xc0,

    /* U+0052 "R" */
    0xfd, 0x9b, 0x3e, 0x6c, 0xdf, 0x36, 0x6c, 0xcd,
    0x9b, 0x18,

    /* U+0053 "S" */
    0x7d, 0x8f, 0x6, 0x4, 0xf, 0x81, 0x83, 0xc6,
    0x89, 0xf0,

    /* U+0054 "T" */
    0xfe, 0x30, 0x60, 0xc1, 0x83, 0x6, 0xc, 0x18,
    0x30, 0x60,

    /* U+0055 "U" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8d, 0xf0,

    /* U+0056 "V" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x79, 0x9e, 0x3c, 0x38,
    0x60, 0xc0,

    /* U+0057 "W" */
    0xd7, 0xaf, 0x5e, 0xbd, 0x7a, 0xdd, 0x3a, 0x6c,
    0xd9, 0xb0,

    /* U+0058 "X" */
    0xc7, 0x9b, 0x33, 0xc3, 0x6, 0x1e, 0x3c, 0xcd,
    0x8b, 0x18,

    /* U+0059 "Y" */
    0xc7, 0x8f, 0x1b, 0x66, 0xc7, 0xc, 0x18, 0x30,
    0x60, 0xc0,

    /* U+005A "Z" */
    0xfc, 0x30, 0xc6, 0x10, 0xc6, 0x30, 0xc3, 0xf,
    0xc0,

    /* U+005B "[" */
    0xfb, 0x6d, 0xb6, 0xdb, 0x6d, 0xc0,

    /* U+005C "\\" */
    0xc1, 0x83, 0x3, 0x6, 0x6, 0xc, 0x18, 0x18,
    0x30, 0x20, 0x60, 0xc0, 0xc0,

    /* U+005D "]" */
    0xed, 0xb6, 0xdb, 0x6d, 0xb7, 0xc0,

    /* U+005E "^" */
    0x30, 0x70, 0xe3, 0x64, 0x58, 0xc0,

    /* U+005F "_" */
    0xfe,

    /* U+0060 "`" */
    0xc9, 0x80,

    /* U+0061 "a" */
    0x78, 0x18, 0x33, 0xe4, 0xd9, 0x91, 0x3b,

    /* U+0062 "b" */
    0xc1, 0x83, 0x6, 0xcc, 0x9d, 0xb1, 0xe2, 0xcd,
    0x2, 0xc0,

    /* U+0063 "c" */
    0x3c, 0x49, 0x9e, 0x4, 0xc, 0xc9, 0x1e,

    /* U+0064 "d" */
    0xc, 0x30, 0xcf, 0x4f, 0x3c, 0xf3, 0xcd, 0x33,
    0xc0,

    /* U+0065 "e" */
    0x3c, 0x49, 0x9f, 0xf6, 0xc, 0x18, 0x1e,

    /* U+0066 "f" */
    0x3b, 0x19, 0xf6, 0x31, 0x8c, 0x63, 0x3c,

    /* U+0067 "g" */
    0x3f, 0x8f, 0x1e, 0x3c, 0x79, 0xd1, 0x9b, 0xc,
    0x18, 0xe0,

    /* U+0068 "h" */
    0xc1, 0x83, 0x7, 0xcc, 0x98, 0xf1, 0xe3, 0xc7,
    0x8f, 0x18,

    /* U+0069 "i" */
    0x30, 0x0, 0x1c, 0x30, 0xc3, 0xc, 0x30, 0xcf,
    0xc0,

    /* U+006A "j" */
    0x30, 0x7, 0x33, 0x33, 0x33, 0x36, 0x6c,

    /* U+006B "k" */
    0xc1, 0x83, 0x6, 0x6c, 0x9b, 0x3c, 0x6c, 0xd9,
    0xb3, 0x38,

    /* U+006C "l" */
    0x70, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xcf,
    0xc0,

    /* U+006D "m" */
    0xed, 0x4b, 0xdf, 0xbf, 0x7e, 0xfd, 0xfb,

    /* U+006E "n" */
    0xf9, 0x93, 0x1e, 0x3c, 0x78, 0xf1, 0xe3,

    /* U+006F "o" */
    0x38, 0x93, 0x36, 0x3c, 0xd9, 0xb3, 0x1c,

    /* U+0070 "p" */
    0xd9, 0xdb, 0x16, 0x3c, 0xd9, 0xb2, 0x7c, 0xc1,
    0x83, 0x0,

    /* U+0071 "q" */
    0x3d, 0xb6, 0xf3, 0x4d, 0xb2, 0xcf, 0xc, 0x30,
    0xc0,

    /* U+0072 "r" */
    0xdc, 0xc9, 0x9b, 0x6, 0xc, 0x18, 0x78,

    /* U+0073 "s" */
    0x7d, 0xc, 0x1e, 0x8, 0x30, 0xbe,

    /* U+0074 "t" */
    0x30, 0xc3, 0x3f, 0x30, 0xc3, 0xc, 0x30, 0xc1,
    0xc0,

    /* U+0075 "u" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x34, 0xdf,

    /* U+0076 "v" */
    0xc7, 0x9b, 0x33, 0xc7, 0x87, 0xc, 0x18,

    /* U+0077 "w" */
    0xd7, 0xaf, 0x5b, 0xa7, 0x4d, 0x9b, 0x36,

    /* U+0078 "x" */
    0xcd, 0x27, 0x8c, 0x79, 0xe7, 0xb3,

    /* U+0079 "y" */
    0xc6, 0xd9, 0xb3, 0x67, 0xcf, 0x6, 0xc, 0x10,
    0x41, 0x80,

    /* U+007A "z" */
    0xfc, 0x61, 0x98, 0xc3, 0xc, 0x3f,

    /* U+007B "{" */
    0x19, 0x18, 0xc6, 0x31, 0x9c, 0x63, 0x18, 0xc6,
    0xc,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+007D "}" */
    0xe3, 0x18, 0xc6, 0x31, 0x83, 0x63, 0x18, 0xc6,
    0x70,

    /* U+007E "~" */
    0x66, 0xed, 0xde, 0xed, 0xdb, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 128, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 128, .box_w = 2, .box_h = 11, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 128, .box_w = 5, .box_h = 3, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 6, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 15, .adv_w = 128, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 29, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 39, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 49, .adv_w = 128, .box_w = 2, .box_h = 3, .ofs_x = 3, .ofs_y = 10},
    {.bitmap_index = 50, .adv_w = 128, .box_w = 3, .box_h = 14, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 56, .adv_w = 128, .box_w = 4, .box_h = 14, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 63, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 69, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 75, .adv_w = 128, .box_w = 2, .box_h = 6, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 77, .adv_w = 128, .box_w = 4, .box_h = 1, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 78, .adv_w = 128, .box_w = 2, .box_h = 3, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 79, .adv_w = 128, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 92, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 128, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 128, .box_w = 2, .box_h = 10, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 184, .adv_w = 128, .box_w = 2, .box_h = 13, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 188, .adv_w = 128, .box_w = 5, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 128, .box_w = 5, .box_h = 4, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 198, .adv_w = 128, .box_w = 5, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 128, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 128, .box_w = 5, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 128, .box_w = 5, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 298, .adv_w = 128, .box_w = 4, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 361, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 371, .adv_w = 128, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 384, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 464, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 473, .adv_w = 128, .box_w = 3, .box_h = 14, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 479, .adv_w = 128, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 492, .adv_w = 128, .box_w = 3, .box_h = 14, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 498, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 504, .adv_w = 128, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 505, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 507, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 514, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 547, .adv_w = 128, .box_w = 5, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 554, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 564, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 128, .box_w = 4, .box_h = 14, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 590, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 600, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 609, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 616, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 623, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 630, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 640, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 649, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 656, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 662, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 677, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 684, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 691, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 697, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 707, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 713, .adv_w = 128, .box_w = 5, .box_h = 14, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 722, .adv_w = 128, .box_w = 2, .box_h = 15, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 726, .adv_w = 128, .box_w = 5, .box_h = 14, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 735, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif

};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t VT323 = {
#else
lv_font_t VT323 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .static_bitmap = 0,
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if VT323*/
