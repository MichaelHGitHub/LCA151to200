#include "header.h"

vector<int> twoSum_r(vector<int>& numbers, int target)
{
    vector<int> result(2, 0);
    int p1 = 0;
    int p2 = numbers.size() - 1;

    while (p1 < p2)
    {
        int sum = numbers[p1] + numbers[p2];
        if (sum == target)
        {
            result[0] = p1 + 1;
            result[1] = p2 + 1;
            break;
        }
        else if (sum > target)
        {
            --p2;
        }
        else
        {
            ++p1;
        }
    }

    return result;
}