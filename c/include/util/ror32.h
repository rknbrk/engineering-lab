#ifndef UTIL_ROR32_H
#define UTIL_ROR32_H
#include <stdint.h>
static inline uint32_t util_ror32(uint32_t value, unsigned int shift) {
  shift &= 31u; return (value >> shift) | (value << (32u - shift));
}
#endif
