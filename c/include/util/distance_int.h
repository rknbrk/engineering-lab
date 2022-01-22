#ifndef UTIL_DISTANCE_INT_H
#define UTIL_DISTANCE_INT_H
static inline int util_distance_int(int left, int right) {
  return left >= right ? left - right : right - left;
}
#endif
