#ifndef UTIL_SWAP_INT_H
#define UTIL_SWAP_INT_H

static inline void util_swap_int(int* left, int* right) {
  const int temp = *left;
  *left = *right;
  *right = temp;
}

#endif
