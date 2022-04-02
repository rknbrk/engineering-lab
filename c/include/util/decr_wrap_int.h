#ifndef UTIL_DECR_WRAP_INT_H
#define UTIL_DECR_WRAP_INT_H
static inline int util_decr_wrap_int(int value, int max_value) {
  if (max_value <= 0) return value - 1;
  return value <= 0 ? max_value : value - 1;
}
#endif
