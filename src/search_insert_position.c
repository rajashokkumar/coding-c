#include <search_insert_position.h>

int searchInsert(int* nums, int numsSize, int target) {
    int position = 0;
    int after = -1;
    int before = numsSize;
    int mid = 0;

    while (after <= before)
    {
        mid = (after + before)/2;
        if(nums[mid] == target)
        {
            position = after + 1;
            return mid;
        } else if ( nums[mid] < target)
        {
            after = mid;
        } else {
            before = mid;
        }
        position = after + 1;
        if ( position == before)
        {
            return before;
        }
    }
    return position;
}
