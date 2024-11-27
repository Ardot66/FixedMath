#ifndef __FIXED_MATH__
#define __FIXED_MATH__

#include <limits.h>
#include <stdint.h>

#define FIXED_T int64_t
#define FIXED_PARTITION 16

#define FIXED_SIZE (sizeof(FIXED_T) * CHAR_BIT)

#define FIXED(High, Low) ((High << 16) + Low)

typedef FIXED_T Fixed;

static inline FIXED_T FixedHigh(Fixed fixed)
{
    return fixed >> FIXED_PARTITION;
}

static inline FIXED_T FixedLow(Fixed fixed)
{
    return (fixed << (FIXED_SIZE - FIXED_PARTITION)) >> (FIXED_SIZE - FIXED_PARTITION);
}

#undef FIXED_T
#undef FIXED_PARTITION
#undef FIXED_SIZE

#endif