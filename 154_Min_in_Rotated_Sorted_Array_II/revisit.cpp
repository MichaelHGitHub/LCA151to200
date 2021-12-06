#include "header.h"

int findMin_r(vector<int>& nums)
{
    int result = nums[0];

    int left = 0;
    int right = nums.size() - 1;

    if (nums[left] >= nums[right])
    {
        // We have to move index if two ends are the same
        while (left <= right && nums[left] == nums[right])
        {
            result = min(nums[left], result);
            ++left;
            --right;
        }

        // Remember the new two ends
        int low = left;
        int high = right;

        while (left <= right)
        {
            int mid = (right + left) / 2;

            if (low == mid && nums[mid] >= nums[mid + 1])
            {
                result = min(nums[mid + 1], result);
                break;
            }
            else if (mid == high && nums[mid] <= nums[mid -1])
            {
                result = min(nums[mid], result);
                break;
            }
            else
            {
                if (nums[mid] > nums[mid + 1])
                {
                    result = min(nums[mid + 1], result);
                    break;
                }
                else if (nums[mid] < nums[mid - 1])
                {
                    result = min(nums[mid], result);
                    break;
                }
                else
                {
                    if (nums[low] <= nums[mid])
                    {
                        result = min(nums[low], result);
                        left = mid + 1;
                    }
                    else
                    {
                        result = min(nums[mid], result);
                        right = mid - 1;
                    }
                }
            }
        }
    }

    return result;
}