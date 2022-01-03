#ifndef UTIL_IS_EVEN_H
#define UTIL_IS_EVEN_H

static inline int util_is_even(int value) {
  return (value & 1) == 0;
}

#endif
