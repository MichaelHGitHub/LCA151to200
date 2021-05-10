#include "header.h"

vector<int> twoSum(vector<int>& numbers, int target)
{
    vector<int> result;
    int left = 0;
    int right = numbers.size() - 1;

    while (right > left)
    {
        if (numbers[left] + numbers[right] == target)
        {
            result.push_back(left + 1);
            result.push_back(right + 1);
            break;
        }
        else if (numbers[left] + numbers[right] > target)
        {
            --right;
        }
        else
        {
            ++left;
        }
    }

    return result;
}