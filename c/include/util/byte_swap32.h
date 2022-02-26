#ifndef UTIL_BYTE_SWAP32_H
#define UTIL_BYTE_SWAP32_H
#include <stdint.h>
static inline uint32_t util_byte_swap32(uint32_t value) {
  return ((value & 0x000000FFu) << 24) | ((value & 0x0000FF00u) << 8)
      | ((value & 0x00FF0000u) >> 8) | ((value & 0xFF000000u) >> 24);
}
#endif
