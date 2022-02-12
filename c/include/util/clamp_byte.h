#ifndef UTIL_CLAMP_BYTE_H
#define UTIL_CLAMP_BYTE_H
#include <stdint.h>
static inline uint8_t util_clamp_byte(int value) {
  if (value < 0) return 0u;
  if (value > 255) return 255u;
  return (uint8_t)value;
}
#endif
