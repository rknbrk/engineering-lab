#ifndef UTIL_IS_POW2_H
#define UTIL_IS_POW2_H

#include <stdint.h>

static inline int util_is_pow2_uint64(uint64_t value) {
  return value != 0 && (value & (value - 1U)) == 0;
}

#endif
