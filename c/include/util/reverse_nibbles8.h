#ifndef UTIL_REVERSE_NIBBLES8_H
#define UTIL_REVERSE_NIBBLES8_H
#include <stdint.h>
static inline uint8_t util_reverse_nibbles8(uint8_t value) {
  return (uint8_t)(((value & 0x0Fu) << 4) | ((value >> 4) & 0x0Fu));
}
#endif
