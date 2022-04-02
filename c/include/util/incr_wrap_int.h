#ifndef UTIL_INCR_WRAP_INT_H
#define UTIL_INCR_WRAP_INT_H
static inline int util_incr_wrap_int(int value, int max_value) {
  if (max_value <= 0) return value + 1;
  return value >= max_value ? 0 : value + 1;
}
#endif
