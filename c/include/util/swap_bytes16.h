#ifndef UTIL_SWAP_BYTES16_H
#define UTIL_SWAP_BYTES16_H
#include <stdint.h>
static inline uint16_t util_swap_bytes16(uint16_t value) {
  return (uint16_t)((value << 8) | (value >> 8));
}
#endif
