#include "header.h"

int titleToNumber(string columnTitle)
{
    int result = 0;
    int power = 0;

    for (int i = columnTitle.length() - 1; i >= 0; i--)
    {
        power = power ? power * 26 : 1;
        result += ((columnTitle.at(i) + 1 - 'A') * (power));
    }

    return result;
}