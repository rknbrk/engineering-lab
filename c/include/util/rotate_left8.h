#ifndef UTIL_ROTATE_LEFT8_H
#define UTIL_ROTATE_LEFT8_H
#include <stdint.h>
static inline uint8_t util_rotate_left8(uint8_t value, unsigned int shift) {
  shift &= 7u;
  return (uint8_t)((value << shift) | (value >> (8u - shift)));
}
#endif
