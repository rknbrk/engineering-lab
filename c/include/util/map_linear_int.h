#ifndef UTIL_MAP_LINEAR_INT_H
#define UTIL_MAP_LINEAR_INT_H
static inline int util_map_linear_int(int value, int in_min, int in_max, int out_min, int out_max) {
  if (in_max == in_min) return out_min;
  return out_min + (value - in_min) * (out_max - out_min) / (in_max - in_min);
}
#endif
