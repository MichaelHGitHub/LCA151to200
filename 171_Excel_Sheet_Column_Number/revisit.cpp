#include "header.h"

int titleToNumber_r(string columnTitle)
{
    int result = 0;
    int power = 1;

    for (int i = columnTitle.length() - 1; i >= 0; i--)
    {
        if (result > 0)
        {
            power *= 26;
        }
        result += (columnTitle[i] - 'A'  + 1 ) * power;
    }

    return result;
}