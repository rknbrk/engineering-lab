#ifndef UTIL_POPCOUNT32_H
#define UTIL_POPCOUNT32_H

#include <stdint.h>

static inline int util_popcount32(uint32_t value) {
  int count = 0;
  while (value != 0) {
    value &= value - 1U;
    ++count;
  }
  return count;
}

#endif
