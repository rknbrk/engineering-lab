#ifndef UTIL_SHIFT_RIGHT16_H
#define UTIL_SHIFT_RIGHT16_H
#include <stdint.h>
static inline uint16_t util_shift_right16(uint16_t value, unsigned int shift) {
  return (uint16_t)(value >> (shift & 15u));
}
#endif
