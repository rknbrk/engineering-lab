#ifndef UTIL_EXTRACT_BIT_H
#define UTIL_EXTRACT_BIT_H
#include <stdint.h>
static inline int util_extract_bit(uint32_t value, unsigned int bit) { return (int)((value >> bit) & 1u); }
#endif
