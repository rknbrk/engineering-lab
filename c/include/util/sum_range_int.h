#ifndef UTIL_SUM_RANGE_INT_H
#define UTIL_SUM_RANGE_INT_H
static inline int util_sum_range_int(int start, int end) {
  if (end < start) return 0;
  return (end - start + 1) * (start + end) / 2;
}
#endif
