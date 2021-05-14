#include "header.h"

uint32_t reverseBits(uint32_t n)
{
    uint32_t result = n;
    int i = 0;
    int j = 31;
    while(j > i)
    {
        // Prepare masks to take bit i and j
        uint32_t mask1 = 1 << i;
        uint32_t mask2 = 1 << j;

        // Prepare masks to erase bit i and j
        uint32_t mask3 = ~mask1;
        uint32_t mask4 = ~mask2;

        // Retrieve bit i and j
        uint32_t bit1 = result & mask1;
        uint32_t bit2 = result & mask2;

        // Swap bit i and j
        bit1 <<= (j - i);
        bit2 >>= (j - i);

        // Erase bit i and j from result
        result &= mask3;
        result &= mask4;

        // Apply swapped bits to result.
        result |= bit1;
        result |= bit2;

        ++i;
        --j;
    }

    return result;
}