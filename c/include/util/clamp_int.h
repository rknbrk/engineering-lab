#ifndef UTIL_CLAMP_INT_H
#define UTIL_CLAMP_INT_H

static inline int util_clamp_int(int value, int min_value, int max_value) {
  if (value < min_value) return min_value;
  if (value > max_value) return max_value;
  return value;
}

#endif
