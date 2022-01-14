#ifndef UTIL_ROTATE_RIGHT8_H
#define UTIL_ROTATE_RIGHT8_H
#include <stdint.h>
static inline uint8_t util_rotate_right8(uint8_t value, unsigned int shift) {
  shift &= 7u;
  return (uint8_t)((value >> shift) | (value << (8u - shift)));
}
#endif
