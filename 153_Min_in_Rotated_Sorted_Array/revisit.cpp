#include "header.h"

int findMin_r(vector<int>& nums)
{
    int result = 0;
    int begin = 0;
    int end = nums.size() - 1;

    if (nums[begin] <= nums[end])
    {
        result = nums[begin];
    }
    else
    {
        while (begin <= end)
        {
            int mid = (end + begin) / 2;

            if (mid == begin && nums[mid + 1] < nums[mid])
            {
                result = nums[mid + 1];
                break;
            }
            else if (mid == end && nums[mid - 1] > nums[mid])
            {
                result = nums[mid];
                break;
            }
            else if (nums[mid - 1] > nums[mid])
            {
                result = nums[mid];
                break;
            }
            else if (nums[mid + 1] < nums[mid])
            {
                result = nums[mid + 1];
                break;
            }
            else
            {
                if (nums[mid] > nums[0])
                {
                    begin = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
    }

    return result;
}