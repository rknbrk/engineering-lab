#ifndef UTIL_FIBONACCI_INT_H
#define UTIL_FIBONACCI_INT_H
static inline int util_fibonacci_int(int index) {
  if (index <= 0) return 0;
  if (index == 1) return 1;
  int previous = 0;
  int current = 1;
  int step = 2;
  for (; step <= index; ++step) {
    const int next = previous + current;
    previous = current;
    current = next;
  }
  return current;
}
#endif
