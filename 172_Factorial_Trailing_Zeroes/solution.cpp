#include "header.h"

int trailingZeroes(int n)
{
    int result = 0;
    int factorial_5 = 5;
    while (factorial_5 <= n)
    {
        result += n / factorial_5;
        factorial_5 *= 5;
    }
    return result;
}