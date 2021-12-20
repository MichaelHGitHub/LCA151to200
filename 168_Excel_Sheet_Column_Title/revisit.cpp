#include "header.h"

// This is 26-number system, which has 0-25. Meanwhile each number
// maps to a letter except 0.
string convertToTitle_r(int columnNumber)
{
    string result;
    int remain = columnNumber;

    // Since the letter number mapping has a offset 1,
    // adjust it before computing
    while (--remain >= 0)
    {
        result += ('A' + remain % 26);
        remain /= 26;
    }

    // Need to reverse the to get it in right order
    return string(result.rbegin(), result.rend());
}