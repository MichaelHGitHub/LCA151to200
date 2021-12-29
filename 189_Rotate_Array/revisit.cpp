#include "header.h"

void rotate_r(vector<int>& nums, int k)
{
    k = k % nums.size();
    int move_pos = nums.size() - k;
    vector<int> pending(nums.begin() + move_pos, nums.end());

    for (int i = move_pos - 1; i >= 0; i--)
    {
        nums[i + k] = nums[i];
    }

    for (int i = 0; i < k; i++)
    {
        nums[i] = pending[i];
    }
}