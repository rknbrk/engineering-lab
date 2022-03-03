#ifndef UTIL_MIN3_INT_H
#define UTIL_MIN3_INT_H
static inline int util_min3_int(int a, int b, int c) {
  int m = a; if (b < m) m = b; if (c < m) m = c; return m;
}
#endif
