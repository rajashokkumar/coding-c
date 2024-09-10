#include <find_first_last.h>
#include <stdlib.h>
#include <string.h>

int findFirst(int *nums,  int numsSize, int target)
{
    int start = 0;
    int end = numsSize-1;
    int mid = 0;

    while(start <= end)
    {
        mid = (start +end)/2;
        if (((mid == 0) || (nums[mid-1] < target)) && (nums[mid] == target))
        {
            return mid;
        } else if ( nums[mid] < target) {
            start = mid +1;
        } else{
            end = mid -1;
        }
    }
    return -1;
}

int findLast(int *nums,  int numsSize, int target)
{
    int start = 0;
    int end = numsSize-1;
    int size = end;
    int mid = 0;

    while(start <= end)
    {
        mid = (start +end)/2;
        if (((mid == size) || (nums[mid+1] > target)) && (nums[mid] == target))
        {
            return mid;
        } else if ( target < nums[mid]) {
            end = mid  - 1;
        } else{
            start = mid + 1;
        }
    }
    return -1;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {

    int firstpos = -1;
    int lastpos = -1;
    int *ret = NULL;
    int size = 0;
    int i = 0, j = 0;

    ret = malloc(sizeof(int)*2);
    *returnSize = 2;

    firstpos = findFirst(nums, numsSize, target);
    lastpos = findLast(nums, numsSize, target);
    if(firstpos == -1)
    {
        ret[0] = -1;
        ret[1] = -1;
        return ret;
    }

    ret[0] = firstpos;
    ret[1] = lastpos;

    return ret;
}