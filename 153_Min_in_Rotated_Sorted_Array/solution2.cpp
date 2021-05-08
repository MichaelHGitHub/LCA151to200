#include "header.h"

// If s[0] < s[n], the array is original, return s[0].
// If s[0] > s[n], binary seach to find the min.
// When s[mid] > s[n], search in the right, otherwise seach in the left
int findMin2(vector<int>& nums)
{
    int last = nums.size() - 1;
    // If array is original or has only one element
    if (nums[0] <= nums[last])
    {
        return nums[0];
    }

    int min = nums[last];
    int left = 0, right = last;
    while(right >= left)
    {
        int mid = (right + left) / 2;
        if (nums[mid] > nums[last])
        {
            left = mid + 1;
        }
        else
        {
            min = nums[mid];
            right = mid - 1;
        }
    }

    return min;
}