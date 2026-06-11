#ifndef UTIL_FROM_BCD8_H
#define UTIL_FROM_BCD8_H
#include <stdint.h>
static inline uint8_t util_from_bcd8(uint8_t value) {
  return (uint8_t)(((value >> 4) * 10u) + (value & 0x0Fu));
}
#endif
