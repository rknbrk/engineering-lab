#ifndef UTIL_INVERT8_H
#define UTIL_INVERT8_H
#include <stdint.h>
static inline uint8_t util_invert8(uint8_t value) {
  return (uint8_t)(~value);
}
#endif

