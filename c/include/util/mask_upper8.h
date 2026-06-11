#ifndef UTIL_MASK_UPPER8_H
#define UTIL_MASK_UPPER8_H
#include <stdint.h>
static inline uint16_t util_mask_upper8(uint16_t value) { return (uint16_t)(value & 0xFF00u); }
#endif
