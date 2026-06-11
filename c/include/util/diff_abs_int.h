#ifndef UTIL_DIFF_ABS_INT_H
#define UTIL_DIFF_ABS_INT_H
static inline int util_diff_abs_int(int left, int right) {
  const int delta = left - right; return delta >= 0 ? delta : -delta;
}
#endif
