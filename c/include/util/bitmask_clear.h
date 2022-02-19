#ifndef UTIL_BITMASK_CLEAR_H
#define UTIL_BITMASK_CLEAR_H
#include <stdint.h>
static inline uint32_t util_bitmask_clear(uint32_t value, uint32_t mask) {
  return value & ~mask;
}
#endif
