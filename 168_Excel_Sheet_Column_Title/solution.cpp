#include "header.h"

static bool convertToLetter(string& result, string& prefix, int& value, int number, int target);

string convertToTitle(int columnNumber)
{
    string result;
    int value = 0;
    string s;
    for (int i = 1; i <= 26; i++)
    {
        if (convertToLetter(result, s, value, i, columnNumber))
        {
            return result;
        }
    }
    return result;
}

bool convertToLetter(string& result, string& prefix, int& value, int number, int target)
{
    for (int i = 0; i < 26; i++)
    {
        string s = prefix;
        s.append(1, i + 'A');
        if (s.length() == number)
        {
            ++value;
            if (target == value)
            {
                result = s;
                return true;
            }
        }
        else
        {
            prefix.append(1, i + 'A');
            if (convertToLetter(result, s, value, number, target))
            {
                return true;
            }
            prefix.erase(prefix.size() - 1);
        }
    }

    return false;
}