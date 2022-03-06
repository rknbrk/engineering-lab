#ifndef UTIL_MAX3_INT_H
#define UTIL_MAX3_INT_H
static inline int util_max3_int(int a, int b, int c) {
  int m = a; if (b > m) m = b; if (c > m) m = c; return m;
}
#endif
