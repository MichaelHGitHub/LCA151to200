#include "header.h"

int trailingZeroes_r(int n)
{
    int result = 0;

    int power_of_5 = 5;

    while (power_of_5 <= n)
    {
        result += n / power_of_5;
        power_of_5 *= 5;
    }

    return result;
}