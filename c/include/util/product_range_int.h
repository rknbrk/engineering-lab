#ifndef UTIL_PRODUCT_RANGE_INT_H
#define UTIL_PRODUCT_RANGE_INT_H
static inline int util_product_range_int(int start, int end) {
  if (end < start) return 0;
  int result = 1;
  int value = start;
  for (; value <= end; ++value) {
    result *= value;
  }
  return result;
}
#endif
