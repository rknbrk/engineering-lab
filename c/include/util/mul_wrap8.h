#ifndef UTIL_MUL_WRAP8_H
#define UTIL_MUL_WRAP8_H
#include <stdint.h>
static inline uint8_t util_mul_wrap8(uint8_t left, uint8_t right) {
  return (uint8_t)((unsigned int)left * (unsigned int)right);
}
#endif

