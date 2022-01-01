#include "header.h"

int rob_r(vector<int>& nums)
{
    vector<int> cache(nums.size() + 3, 0);

    for (int i = 0; i < nums.size(); i++)
    {
        cache[i + 3] = nums[i] + max(cache[i + 1], cache[i]);
    }
    return max(cache[cache.size() - 1], cache[cache.size() - 2]);
}