#ifndef UTIL_BITMASK_TOGGLE_H
#define UTIL_BITMASK_TOGGLE_H
#include <stdint.h>
static inline uint32_t util_bitmask_toggle(uint32_t value, uint32_t mask) {
  return value ^ mask;
}
#endif
