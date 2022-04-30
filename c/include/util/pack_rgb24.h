#ifndef UTIL_PACK_RGB24_H
#define UTIL_PACK_RGB24_H
#include <stdint.h>
static inline uint32_t util_pack_rgb24(uint8_t red, uint8_t green, uint8_t blue) {
  return ((uint32_t)red << 16) | ((uint32_t)green << 8) | (uint32_t)blue;
}
#endif
