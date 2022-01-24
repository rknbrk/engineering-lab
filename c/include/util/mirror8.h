#ifndef UTIL_MIRROR8_H
#define UTIL_MIRROR8_H
#include <stdint.h>
static inline uint8_t util_mirror8(uint8_t value) {
  value = (uint8_t)(((value & 0xF0u) >> 4) | ((value & 0x0Fu) << 4));
  value = (uint8_t)(((value & 0xCCu) >> 2) | ((value & 0x33u) << 2));
  value = (uint8_t)(((value & 0xAAu) >> 1) | ((value & 0x55u) << 1));
  return value;
}
#endif

