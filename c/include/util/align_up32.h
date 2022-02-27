#ifndef UTIL_ALIGN_UP32_H
#define UTIL_ALIGN_UP32_H
#include <stdint.h>
static inline uint32_t util_align_up32(uint32_t value, uint32_t alignment) {
  if (alignment == 0u) return value;
  const uint32_t remainder = value % alignment;
  return remainder == 0u ? value : value + (alignment - remainder);
}
#endif
