#include "header.h"

// Two things to handle while multiple the elements to get cumulative product.
// 1. When an element is 0, calculating breaks and starts over from next.
// 2. When an element is negative, current cumulative max becomes current min
// and current cumulative min becomes current cumulative max.
int maxProduct(vector<int>& nums)
{
    if (nums.size() < 2)
    {
        return nums[0];
    }

    int total_max = nums[0];
    int cur_max = nums[0];
    int cur_min = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        // By comparing current element with cumulative max and min, 
        // we can start over if the previous element is 0

        if (nums[i] >= 0)
        {
            cur_max = max(nums[i], nums[i] * cur_max);
            cur_min = min(nums[i], nums[i] * cur_min);
        }
        else
        {
            int temp_max = max(nums[i], nums[i] * cur_min);
            cur_min = min(nums[i], nums[i] * cur_max);
            cur_max = temp_max;
        }

        total_max = max(total_max, cur_max);
    }

    return total_max;
}
