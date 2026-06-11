#ifndef UTIL_MATCH_MASK8_H
#define UTIL_MATCH_MASK8_H
#include <stdint.h>
static inline int util_match_mask8(uint8_t value, uint8_t expected, uint8_t mask) {
  return (value & mask) == (expected & mask);
}
#endif

