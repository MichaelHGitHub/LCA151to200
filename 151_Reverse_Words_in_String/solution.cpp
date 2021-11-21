#include "header.h"

void reverseString(string& s, int start, int end);

// Three steps, all are done in place.
// 1. Fisrt revert the whole string
// 2. Then revert each word to get the chars in each word to their original order.
// 3. Then remove empty char.

string reverseWords(string s)
{
    if (s.length() < 2)
    {
        return s;
    }

    // Fisrt revert the whole string
    reverseString(s, 0, s.length() - 1);

    // Then revert each word to get the chars in each word to their original order.
    int start = -1;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (start == -1)
        {
            if (s[i] == ' ')
            {
                continue;
            }
            else
            {
                start = i;
            }
        }
        else
        {
            if (s[i] != ' ')
            {
                continue;
            }
            else
            {
                if (i > start + 1)
                {
                    reverseString(s, start, i - 1);
                }

                start = -1;
            }
        }
    }

    // Do forget to revert last word if there is one
    if (start != -1 && start < s.length() - 1)
    {
        reverseString(s, start, s.length() - 1);
    }

    // Then remove empty char.
    int pos = 0;
    bool skip = true;
    for (int i = 0; i < s.length(); i++)
    {
        // Pick up every non-empty character.
        if (s[i] != ' ')
        {
            skip = false;
            s[pos++] = s[i];
        }
        else
        {
            if (!skip)
            {
                // This is the end of a word.
                skip = true;
                s[pos++] = ' ';
            }
        }
    }

    // There could a tailing empty char, remove it
    if (s[pos - 1] == ' ')
    {
        s.erase(pos - 1);
    }
    else
    {
        s.erase(pos);
    }

    return s;
}

void reverseString(string& s, int start, int end)
{
    while (start < end)
    {
        char c = s[start];
        s[start] = s[end];
        s[end] = c;

        ++start;
        --end;
    }
}