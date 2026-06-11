#ifndef UTIL_GRAY_RGB24_H
#define UTIL_GRAY_RGB24_H
#include <stdint.h>
static inline uint8_t util_gray_rgb24(uint8_t red, uint8_t green, uint8_t blue) {
  return (uint8_t)((red * 30 + green * 59 + blue * 11) / 100);
}
#endif

