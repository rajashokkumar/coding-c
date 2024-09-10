#include <search_insert_position.h>

int searchInsert(int* nums, int numsSize, int target) {
    int start = 0;
    int end = numsSize -1;
    int mid = 0;

    while (start <= end)
    {
        mid = (start + end)/2;
        if(nums[mid] == target)
        {
            return mid;
        } else if ( nums[mid] < target)
        {
            start = mid+1;
        } else {
            end = mid-1;
        }
    }
    return start;
}
