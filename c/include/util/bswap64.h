#ifndef UTIL_BSWAP64_H
#define UTIL_BSWAP64_H
#include <stdint.h>
static inline uint64_t util_bswap64(uint64_t value) {
  return ((value & 0xFF00000000000000ULL) >> 56) | ((value & 0x00FF000000000000ULL) >> 40)
      | ((value & 0x0000FF0000000000ULL) >> 24) | ((value & 0x000000FF00000000ULL) >> 8)
      | ((value & 0x00000000FF000000ULL) << 8)  | ((value & 0x0000000000FF0000ULL) << 24)
      | ((value & 0x000000000000FF00ULL) << 40) | ((value & 0x00000000000000FFULL) << 56);
}
#endif
