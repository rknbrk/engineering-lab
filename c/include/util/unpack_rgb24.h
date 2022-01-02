#ifndef UTIL_UNPACK_RGB24_H
#define UTIL_UNPACK_RGB24_H
#include <stdint.h>
static inline void util_unpack_rgb24(uint32_t color, uint8_t* red, uint8_t* green, uint8_t* blue) {
  *red = (uint8_t)((color >> 16) & 0xFFu);
  *green = (uint8_t)((color >> 8) & 0xFFu);
  *blue = (uint8_t)(color & 0xFFu);
}
#endif

