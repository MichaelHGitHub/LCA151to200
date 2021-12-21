#include "header.h"

int majorityElement_r(vector<int>& nums)
{
    int result = nums[0];
    int count = 1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == result)
        {
            ++count;
        }
        else
        {
            if (--count == 0)
            {
                count = 1;
                result = nums[i];
            }
        }
    }

    return result;
}