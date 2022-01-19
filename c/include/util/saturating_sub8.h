#ifndef UTIL_SATURATING_SUB8_H
#define UTIL_SATURATING_SUB8_H
#include <stdint.h>
static inline uint8_t util_saturating_sub8(uint8_t left, uint8_t right) {
  return left > right ? (uint8_t)(left - right) : 0u;
}
#endif
