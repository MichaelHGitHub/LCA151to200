#include "header.h"

uint32_t reverseBits_r(uint32_t n)
{
    uint32_t result = 0;
    string bi_string(32, '0');
    int pos = 0;

    // Build the binary string ( in reverse order, no need
    // to reverse for the result).
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            bi_string[pos] = '1';
        }
        ++pos;
        n /= 2;
    }

    // Convert binary string to uint value
    uint32_t seed = 0;
    for (int i = bi_string.length() - 1; i >= 0; i--)
    {
        seed = (0 == seed) ? 1 : seed * 2;
        result += (bi_string[i] == '1' ? seed: 0);
    }

    return result;
}