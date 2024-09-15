#include <find_min_rotated_sorted.h>

int findMin(int* nums, int numsSize)
{
     int start = 0;
    int end = numsSize -1;
    int mid = 0;
    int target = -1;

    while(start <= end)
    {
        mid = (start + end)/2;
        if (nums[mid] == target)
        {
            return mid;
        } else {
            //Searching rotated list
            if (nums[start] > nums[end])
            {
                if (nums[start] <= nums[mid])
                {
                //First half is sorted
                   if((target >= nums[start])  && (target < nums[mid]))
                   {
                    end = mid - 1;
                   } else {
                    start = mid + 1;
                   }
                } else {
                //Second half is sorted
                    if( (target <= nums[end]) && (target > nums[mid]))
                    {
                        start = mid + 1;
                    } else {
                        end = mid -1;
                    }

                }
            } else {
                //Seach in sorted  list
                if(target <= nums[mid])
                {
                    end = mid-1;
                } else{
                    start = mid +1;
                }
            }
        } 
    }
    return nums[start];
}