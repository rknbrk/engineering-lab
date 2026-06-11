#ifndef UTIL_CLAMP16_H
#define UTIL_CLAMP16_H
#include <stdint.h>
static inline uint16_t util_clamp16(int value) {
  if (value < 0) return 0u;
  if (value > 65535) return 65535u;
  return (uint16_t)value;
}
#endif

