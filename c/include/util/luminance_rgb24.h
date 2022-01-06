#ifndef UTIL_LUMINANCE_RGB24_H
#define UTIL_LUMINANCE_RGB24_H
#include <stdint.h>
static inline uint8_t util_luminance_rgb24(uint8_t red, uint8_t green, uint8_t blue) {
  return (uint8_t)((red * 2126 + green * 7152 + blue * 722) / 10000);
}
#endif

