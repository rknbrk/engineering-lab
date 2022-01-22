#ifndef UTIL_TRUNCATE16_TO8_H
#define UTIL_TRUNCATE16_TO8_H
#include <stdint.h>
static inline uint8_t util_truncate16_to8(uint16_t value) {
  return (uint8_t)(value & 0xFFu);
}
#endif

