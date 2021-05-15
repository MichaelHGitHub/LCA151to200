#include <unordered_map>
#include "header.h"

int selectRob(vector<int>& nums, unordered_map<int, int>& record, int start);

// The robber may skip 1 or 2 houses, but never skip 3 because skipping 3 won't
// make any better looting results.
// Use recursive, start either from first house or second house.
// Use a map to record the history to reduce recursion.

int rob(vector<int>& nums)
{
    unordered_map<int, int> record;
    int sum_even = selectRob(nums, record, 0);
    int sum_odd = selectRob(nums, record, 1);

    return sum_even > sum_odd ? sum_even : sum_odd;
}

int selectRob(vector<int>& nums, unordered_map<int, int>& record, int start)
{
    if (start >= nums.size())
    {
        return 0;
    }

    if (record.find(start) != record.end())
    {
        return record[start];
    }

    int sum1 = nums[start] + selectRob(nums, record, start + 2);
    int sum2 = nums[start] + selectRob(nums, record, start + 3);

    int sum = sum1 > sum2 ? sum1 : sum2;
    record[start] = sum;
    return sum;
}