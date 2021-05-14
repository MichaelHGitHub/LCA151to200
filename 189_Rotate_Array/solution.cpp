#include "header.h"

void rotate(vector<int>& nums, int k)
{
    int size = nums.size();
    int step = k % size;
    int count = 0;

    for(int i = size - step; count < size && i < size; i++)
    {
        int value = nums[i];
        int pos = i;
        // Relocate elements for nums[i]
       do
        {
            pos = (pos + step) % size;
            int temp = nums[pos];
            nums[pos] = value;
            value = temp;
            ++count;
       } while (pos != i);
    }
}