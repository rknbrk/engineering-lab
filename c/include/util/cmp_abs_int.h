#ifndef UTIL_CMP_ABS_INT_H
#define UTIL_CMP_ABS_INT_H
static inline int util_cmp_abs_int(int left, int right) {
  const int abs_left = left < 0 ? -left : left;
  const int abs_right = right < 0 ? -right : right;
  return (abs_left > abs_right) - (abs_left < abs_right);
}
#endif
