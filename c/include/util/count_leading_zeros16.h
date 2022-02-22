#ifndef UTIL_COUNT_LEADING_ZEROS16_H
#define UTIL_COUNT_LEADING_ZEROS16_H
#include <stdint.h>
static inline int util_count_leading_zeros16(uint16_t value) {
  int count = 0;
  uint16_t mask = 0x8000u;
  while (count < 16 && (value & mask) == 0) {
    ++count;
    mask >>= 1;
  }
  return count;
}
#endif
