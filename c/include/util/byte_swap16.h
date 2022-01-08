#ifndef UTIL_BYTE_SWAP16_H
#define UTIL_BYTE_SWAP16_H

#include <stdint.h>

static inline uint16_t util_byte_swap16(uint16_t value) {
  return (uint16_t)((value << 8) | (value >> 8));
}

#endif
