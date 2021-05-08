#include "header.h"

// The only tricky part of this problem is that if the last phase of same
// numbers get split into beginning and end during rotation. so, we can skip
// the beginning numbers if they are equal to the end.
// If s[0] < s[n], the array is original, return s[0].
// If s[0] > s[n], binary seach to find the min.
// When s[mid] > s[n], search in the right, otherwise seach in the left
int findMin2(vector<int>& nums)
{
    int left = 0;
    int last = nums.size() - 1;
    while (left < last && nums[left] == nums[last])
    {
        ++left;
    }
    
    // If array is original or has only one element
    if (nums[left] <= nums[last])
    {
        return nums[left];
    }

    int min = nums[last];
    int right = last;
    while (right >= left)
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