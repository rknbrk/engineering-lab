#ifndef UTIL_ALIGN_DOWN32_H
#define UTIL_ALIGN_DOWN32_H
#include <stdint.h>
static inline uint32_t util_align_down32(uint32_t value, uint32_t alignment) {
  if (alignment == 0u) return value;
  return value - (value % alignment);
}
#endif
