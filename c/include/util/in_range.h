#ifndef UTIL_IN_RANGE_H
#define UTIL_IN_RANGE_H

static inline int util_in_range_int(int value, int min_value, int max_value) {
  return value >= min_value && value <= max_value;
}

#endif
