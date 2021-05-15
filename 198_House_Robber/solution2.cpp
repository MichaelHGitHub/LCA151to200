#include "header.h"

// The robber may skip 1 or 2 houses, but never skip 3 because skipping 3 won't
// make any better looting results.
// Use DP, each element of DP records the highest gain up to that house. 
// Add 3 empty record to facilitate the calculation.
int rob2(vector<int>& nums)
{
    vector<int> record(nums.size() + 3, 0);
    for (int i = 0; i < nums.size(); i++)
    {
        record[i + 3] = nums[i] + (record[i + 1] > record[i] ? record[i + 1] : record[i]);
    }

    return record[record.size() - 1] > record[record.size() - 2] ? record[record.size() - 1] : record[record.size() - 2];
}
