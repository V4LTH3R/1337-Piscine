#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int i = 0;
    int j;
    while (i < numsSize - 1)
    {
        j = i + 1;
        while (j < numsSize)
        {
            if (nums[i] == 0 && nums[j] != 0)
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
            j++;
        }
        i++;
    }
    for (int i = 0; i < numsSize; i++)
    {
        printf("%i  ", nums[i]);
    }
}

int main(void)
{
    int arr[] = {0,0,1,3,12};
    moveZeroes(arr, 5);
}