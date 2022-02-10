#ifndef UTIL_NEXT_PRIME_INT_H
#define UTIL_NEXT_PRIME_INT_H
static inline int util_is_prime_local(int value) {
  if (value < 2) return 0;
  if (value == 2) return 1;
  if (value % 2 == 0) return 0;
  int divisor = 3;
  for (; divisor * divisor <= value; divisor += 2) {
    if (value % divisor == 0) return 0;
  }
  return 1;
}
static inline int util_next_prime_int(int value) {
  int candidate = value + 1;
  while (!util_is_prime_local(candidate)) {
    ++candidate;
  }
  return candidate;
}
#endif
