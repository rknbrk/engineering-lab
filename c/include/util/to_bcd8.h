#ifndef UTIL_TO_BCD8_H
#define UTIL_TO_BCD8_H
#include <stdint.h>
static inline uint8_t util_to_bcd8(uint8_t value) {
  return (uint8_t)(((value / 10u) << 4) | (value % 10u));
}
#endif
