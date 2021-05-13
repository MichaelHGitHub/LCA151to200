#include <list>
#include "header.h"

// Tackle this problem in 3 steps:
// 1. Sort the string-form of the numbers and save them to a list
//      1.1 Although there are better ways to compare two number strings,
//          but they are quite complicated to fit our needs in this case,
//          so let's just compare (s1 + s2) with (s2 + s1), which is much easier.
// 2. Remove the leading zeros
// 3. Concatenate the piece of number strings to a single result.
string largestNumber(vector<int>& nums)
{
    list<string> num_strings;

    // Sort the numbers in their string form
    for (int i = 0; i < nums.size(); i++)
    {
        string ns = to_string(nums[i]);
        list<string>::iterator it = num_strings.begin();

        while (num_strings.size() && it != num_strings.end())
        {
            string s1 = ns + *it;
            string s2 = *it + ns;

            if (s1 >= s2)
            {
                break;
            }
            else
            {
                ++it;
            }
        }

        num_strings.insert(it, ns);
    }

    // Remove leading zeros
    list<string>::iterator it = num_strings.begin();
    if (num_strings.size() > 1)
    {
        while (it != num_strings.end() && *it == "0")
        {
            ++it;
        }
    }

    // If all 0, keep the last one
    if (it == num_strings.end())
    {
        --it;
    }

    // Piece the final string
    string result;
    while (it != num_strings.end())
    {
        
        result += *it;
        ++it;
    }

    return result;
}