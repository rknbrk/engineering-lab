#ifndef UTIL_IS_ODD_H
#define UTIL_IS_ODD_H

static inline int util_is_odd(int value) {
  return (value & 1) != 0;
}

#endif
