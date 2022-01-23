#ifndef UTIL_MEDIAN3_INT_H
#define UTIL_MEDIAN3_INT_H
static inline int util_median3_int(int a, int b, int c) {
  if (a > b) { const int t = a; a = b; b = t; }
  if (b > c) { const int t = b; b = c; c = t; }
  if (a > b) { const int t = a; a = b; b = t; }
  return b;
}
#endif
