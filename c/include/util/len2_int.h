#ifndef UTIL_LEN2_INT_H
#define UTIL_LEN2_INT_H
static inline int util_len2_int(int x, int y) {
  const int ax = x < 0 ? -x : x; const int ay = y < 0 ? -y : y; return ax + ay;
}
#endif
