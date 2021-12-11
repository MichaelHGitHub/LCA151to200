#include "header.h"

// As nums[i] != nums[i+1] and nums[-1] = nums[n] = -infinite,
// it is guarenteed to have at least one answer
// Using binary search, if nums[mid] > nums[mid+1], there must be an answer
// lies in the left part, otherwise, at least one answer lies in the right 
// half. 
int findPeakElement(vector<int>& nums)
{
    int left = 0;
    int right = nums.size() - 1;

    while (right > left)
    {
        int mid = (right + left) / 2;
        if (nums[mid] > nums[mid + 1])
        {
            // mid is a candidate of the answer, should be included in the 
            // next search.
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return left;
}