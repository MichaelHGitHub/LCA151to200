#include "header.h"
#include <map>

string fractionToDecimal_r(int numerator, int denominator)
{
    string result;
    std::map<long long, size_t> record;
    long long new_numerator = numerator;
    long long new_denominator = denominator;

    if ((new_numerator > 0 && new_denominator < 0) ||
        (new_numerator < 0 && new_denominator > 0))
    {
        result = "-";
    }

    new_numerator = abs(new_numerator);
    new_denominator = abs(new_denominator);

    result += std::to_string(new_numerator / new_denominator);
    new_numerator %= new_denominator;

    if (new_numerator > 0)
    {
        result += ".";
    }

    while (new_numerator > 0)
    {
        if (record.find(new_numerator) != record.end())
        {
            result = result.substr(0, record[new_numerator]) + "(" + result.substr(record[new_numerator]) + ")";
            break;
        }

        record[new_numerator] = result.length();

        new_numerator *= 10;
        result += std::to_string(new_numerator / new_denominator);
        new_numerator %= new_denominator;
    }

    return result;
}