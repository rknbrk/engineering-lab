#ifndef UTIL_SELECT_INT_H
#define UTIL_SELECT_INT_H
static inline int util_select_int(int condition, int when_true, int when_false) {
  return condition ? when_true : when_false;
}
#endif
