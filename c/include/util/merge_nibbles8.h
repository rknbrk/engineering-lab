#ifndef UTIL_MERGE_NIBBLES8_H
#define UTIL_MERGE_NIBBLES8_H
#include <stdint.h>
static inline uint8_t util_merge_nibbles8(uint8_t high, uint8_t low) {
  return (uint8_t)(((high & 0x0Fu) << 4) | (low & 0x0Fu));
}
#endif
