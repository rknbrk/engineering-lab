#ifndef UTIL_COUNT_BITS16_H
#define UTIL_COUNT_BITS16_H
#include <stdint.h>
static inline int util_count_bits16(uint16_t value) {
  int count = 0; while (value != 0) { value &= (uint16_t)(value - 1u); ++count; } return count;
}
#endif
