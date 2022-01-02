#ifndef UTIL_MAX_INT_H
#define UTIL_MAX_INT_H

static inline int util_max_int(int left, int right) {
  return left > right ? left : right;
}

#endif
