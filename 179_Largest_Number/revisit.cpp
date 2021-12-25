#include "header.h"
#include <algorithm>


static bool compareStr(const string& num1, const string& num2);

string largestNumber_r(vector<int>& nums)
{
   vector<string> str_nums(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
        str_nums[i] = std::to_string(nums[i]);
    }

    std::sort(str_nums.begin(), str_nums.end(), compareStr);

    // construct the final result;
    string str;
    for (int i = 0; i < str_nums.size(); i++)
    {
        // Get rid of the duplicate 0s.
        if (str == "0" && str_nums[i] == "0")
        {
            continue;
        }
        str += str_nums[i];
    }

    return str;
}

bool compareStr(const string& num1, const string& num2)
{
    if (num1.length() < num2.length())
    {
        return !compareStr(num2, num1);
    }

    if (num1.length() > num2.length() && 0 == num1.find(num2))
    {
        return compareStr(num1.substr(num2.length()), num2);
    }

    return num1 > num2;
}