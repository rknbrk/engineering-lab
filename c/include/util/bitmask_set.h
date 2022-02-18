#ifndef UTIL_BITMASK_SET_H
#define UTIL_BITMASK_SET_H
#include <stdint.h>
static inline uint32_t util_bitmask_set(uint32_t value, uint32_t mask) {
  return value | mask;
}
#endif
