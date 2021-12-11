#include "header.h"

int findPeakElement_r(vector<int>& nums)
{
    int result = 0;

    if (nums.size() == 1)
    {
        result = 0;
    }
    else if (nums.size() == 2)
    {
        result = nums[0] > nums[1] ? 0 : 1;
    }
    else
    {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (0 == mid)
            {
                if (nums[mid] > nums[mid + 1])
                {
                    result = mid;
                    break;
                }
                else
                {
                    left = mid + 1;
                }
            }
            else if(mid == nums.size() - 1)
            {
                if (nums[mid] > nums[mid - 1])
                {
                    result = mid;
                    break;
                }
                else
                {
                    right = mid - 1;
                }
            }
            else if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
            {
                result = mid;
                break;
            }
            else if (nums[mid] > nums[mid + 1])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
    }

    return result;
}