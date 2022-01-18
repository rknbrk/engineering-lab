#ifndef UTIL_SATURATING_ADD8_H
#define UTIL_SATURATING_ADD8_H
#include <stdint.h>
static inline uint8_t util_saturating_add8(uint8_t left, uint8_t right) {
  const unsigned int sum = (unsigned int)left + (unsigned int)right;
  return (uint8_t)(sum > 255u ? 255u : sum);
}
#endif
