#include "header.h"

int hammingWeight_r(uint32_t n)
{
    int count = 0;

    while (n > 0)
    {
        if (n % 2 > 0)
        {
            ++count;
        }
        n /= 2;
    }
    return count;
}