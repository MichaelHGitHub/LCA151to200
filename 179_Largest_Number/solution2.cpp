#include <algorithm>
#include "header.h"


// Tackle this problem in 3 steps:
// 1. Sort the string-form of the numbers
//      1.1 Although there are better ways to compare two number strings,
//          but they are quite complicated to fit our needs in this case,
//          so let's just compare (s1 + s2) with (s2 + s1), which is much easier.
// 2. Remove the leading zeros
// 3. Concatenate the piece of number strings to a single result.
string largestNumber2(vector<int>& nums)
{
    vector<string> num_strings;

    // Sort the numbers in their string form
    for (int i = 0; i < nums.size(); i++)
    {
        num_strings.push_back(to_string(nums[i]));
    }

    std::sort(num_strings.begin(), num_strings.end(),
        [](string s1, string s2) {return s1 + s2  > s2 + s1; });

    // Remove leading zeros
    int pos = 0;

    while (pos < num_strings.size() - 1 && num_strings[pos] == "0")
    {
        ++pos;
    }

    // Piece the final string
    string result;
    while (pos < num_strings.size())
    {
        result += num_strings[pos];
        ++pos;
    }

    return result;
}