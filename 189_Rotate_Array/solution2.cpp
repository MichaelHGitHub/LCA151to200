#include "header.h"

void revert(vector<int>& nums, int start, int end);

void rotate2(vector<int>& nums, int k)
{
    int size = nums.size();
    int move_size = k % size;

    revert(nums, 0, size - 1);
    revert(nums, 0, move_size - 1);
    revert(nums, move_size, size - 1);
}

void revert(vector<int>& nums, int start, int end)
{
    while (end > start)
    {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        ++start;
        --end;
    }
}