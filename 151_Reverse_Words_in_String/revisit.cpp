#include "header.h"

static void reverseString(string& s, int begin, int end);

string reverseWords_r(string s)
{
    // Get rid of unnecessary empty space.
    int to_be_filled = 0;
    int to_be_moved = 0;
    while (to_be_moved < s.length())
    {
        if (s[to_be_moved] == ' ')
        {
            ++to_be_moved;
        }
        else
        {
            if (to_be_filled > 0 &&
                (to_be_moved > 0 && s[to_be_moved - 1] == ' '))
            {
                s[to_be_filled++] = ' ';
            }
            s[to_be_filled++] = s[to_be_moved++];
        }
    }

    // truncate the unnecessary part of the string
    s.resize(to_be_filled);

    // Reverse the whole string first
    reverseString(s, 0, s.length() - 1);

    // Reverse each phase to its orginal word
    int begin = 0;
    int end = 0;
    while(end < s.length())
    {
        if (s[end] != ' ')
        {
            ++end;
        }
        else
        {
            reverseString(s, begin, end - 1);
            begin = end + 1;
            end = begin;
        }
    }

    // The last phase
    if (end > begin)
    {
        reverseString(s, begin, end - 1);
    }

    return s;
}

void reverseString(string& s, int begin, int end)
{
    if (s.length() > end)
    {
        while (end > begin)
        {
            char temp = s[begin];
            s[begin] = s[end];
            s[end] = temp;

            ++begin;
            --end;
        }
    }
}