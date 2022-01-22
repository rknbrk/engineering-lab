#ifndef UTIL_COMPARE_INT_H
#define UTIL_COMPARE_INT_H
static inline int util_compare_int(int left, int right) {
  return (left > right) - (left < right);
}
#endif
