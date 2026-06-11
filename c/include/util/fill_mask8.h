#ifndef UTIL_FILL_MASK8_H
#define UTIL_FILL_MASK8_H
#include <stdint.h>
static inline uint8_t util_fill_mask8(uint8_t value, uint8_t mask, uint8_t fill) {
  return (uint8_t)((value & ~mask) | (fill & mask));
}
#endif

