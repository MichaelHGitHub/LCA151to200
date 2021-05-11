
#include "header.h"

// Treat this as a 26-scale number system, use the same way of converting
// decimal to binary to get each of the letters. Only thing to treat differently
// is to shift 1-26 to 0-25 at each round of division.
string convertToTitle2(int columnNumber)
{
    string result;
    while (columnNumber)
    {
        // Shift 1-26 to 0-25
        --columnNumber;

        result.append(1, (columnNumber) % 26 + 'A');
        columnNumber /= 26;
    }

    return string(result.rbegin(), result.rend());
}