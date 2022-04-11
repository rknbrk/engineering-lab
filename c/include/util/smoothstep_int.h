#ifndef UTIL_SMOOTHSTEP_INT_H
#define UTIL_SMOOTHSTEP_INT_H
static inline int util_smoothstep_int(int edge0, int edge1, int value) {
  if (edge0 == edge1) return 0;
  int t = (value - edge0) * 100 / (edge1 - edge0);
  if (t < 0) t = 0; if (t > 100) t = 100;
  return t * t * (300 - 2 * t) / 10000;
}
#endif
