#ifndef UTIL_BOUND_WRAP_INT_H
#define UTIL_BOUND_WRAP_INT_H
static inline int util_bound_wrap_int(int value, int min_value, int max_value) {
  const int span = max_value - min_value + 1;
  if (span <= 0) return min_value;
  int offset = (value - min_value) % span;
  if (offset < 0) offset += span;
  return min_value + offset;
}
#endif
