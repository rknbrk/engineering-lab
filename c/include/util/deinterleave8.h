#ifndef UTIL_DEINTERLEAVE8_H
#define UTIL_DEINTERLEAVE8_H
#include <stdint.h>
static inline void util_deinterleave8(uint16_t value, uint8_t* left, uint8_t* right) {
  uint8_t l = 0, r = 0; unsigned int bit = 0;
  for (; bit < 8u; ++bit) {
    l |= (uint8_t)(((value >> (bit * 2u)) & 1u) << bit);
    r |= (uint8_t)(((value >> (bit * 2u + 1u)) & 1u) << bit);
  }
  *left = l; *right = r;
}
#endif
