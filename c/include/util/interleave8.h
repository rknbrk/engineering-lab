#ifndef UTIL_INTERLEAVE8_H
#define UTIL_INTERLEAVE8_H
#include <stdint.h>
static inline uint16_t util_interleave8(uint8_t left, uint8_t right) {
  uint16_t value = 0; unsigned int bit = 0;
  for (; bit < 8u; ++bit) {
    value |= (uint16_t)((left >> bit) & 1u) << (bit * 2u);
    value |= (uint16_t)((right >> bit) & 1u) << (bit * 2u + 1u);
  }
  return value;
}
#endif
