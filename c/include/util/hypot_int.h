#ifndef UTIL_HYPOT_INT_H
#define UTIL_HYPOT_INT_H
static inline int util_hypot_int(int x, int y) {
  const int ax = x < 0 ? -x : x; const int ay = y < 0 ? -y : y; return ax + ay;
}
#endif
