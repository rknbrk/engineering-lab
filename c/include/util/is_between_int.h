#ifndef UTIL_IS_BETWEEN_INT_H
#define UTIL_IS_BETWEEN_INT_H
static inline int util_is_between_int(int value, int min_value, int max_value) {
  return value >= min_value && value <= max_value;
}
#endif
