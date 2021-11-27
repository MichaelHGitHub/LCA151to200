#include "header.h"

int maxProduct_r(vector<int>& nums)
{
    int max_product = INT_MIN;

    int cur_max = 0;
    int cur_min = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        int last_cur_max = cur_max;
        if (0 == nums[i])
        {
            cur_max = 0;
            cur_min = 0;
        }
        else
        {
            if (0 == cur_max)
            {
                cur_max = nums[i];
            }
            else
            {
                cur_max = max(nums[i], max(cur_max * nums[i], cur_min * nums[i]));
            }

            if (0 == cur_min)
            {
                cur_min = nums[i];
            }
            else
            {
                cur_min = min(nums[i], min(cur_min * nums[i], last_cur_max * nums[i]));
            }
        }

        max_product = max(cur_max, max_product);
    }

    return max_product;
}