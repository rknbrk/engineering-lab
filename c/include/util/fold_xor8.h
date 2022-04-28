#ifndef UTIL_FOLD_XOR8_H
#define UTIL_FOLD_XOR8_H
#include <stdint.h>
static inline uint8_t util_fold_xor8(uint32_t value) {
  value ^= value >> 16; value ^= value >> 8; return (uint8_t)(value & 0xFFu);
}
#endif
