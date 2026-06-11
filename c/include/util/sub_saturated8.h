#ifndef UTIL_SUB_SATURATED8_H
#define UTIL_SUB_SATURATED8_H
#include <stdint.h>
static inline uint8_t util_sub_saturated8(uint8_t left, uint8_t right) {
  return left > right ? (uint8_t)(left - right) : 0u;
}
#endif

