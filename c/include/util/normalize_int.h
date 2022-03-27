#ifndef UTIL_NORMALIZE_INT_H
#define UTIL_NORMALIZE_INT_H
static inline int util_normalize_int(int value, int min_value, int max_value) {
  if (max_value == min_value) return 0;
  return (value - min_value) * 100 / (max_value - min_value);
}
#endif
