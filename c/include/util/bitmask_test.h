#ifndef UTIL_BITMASK_TEST_H
#define UTIL_BITMASK_TEST_H
#include <stdint.h>
static inline int util_bitmask_test(uint32_t value, uint32_t mask) {
  return (value & mask) == mask;
}
#endif
