#ifndef UTIL_COUNT_TRAILING_ZEROS16_H
#define UTIL_COUNT_TRAILING_ZEROS16_H
#include <stdint.h>
static inline int util_count_trailing_zeros16(uint16_t value) {
  int count = 0;
  while (count < 16 && (value & 1u) == 0) {
    ++count;
    value >>= 1;
  }
  return count;
}
#endif
