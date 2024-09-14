#include <first_bad_version.h>

//int firstBadVersion(int n) {
int firstBadVersion(int n, int badVersion) {

    unsigned int low = 1;
    unsigned int high = n;
    unsigned int mid = 0;

    while (low <= high)
    {
        mid = (low + high)/2;
        //if (((mid == 0) || !isBadVersion(mid-1)) && (isBadVersion(mid)))
        if (((mid == 0) || ((mid-1) < badVersion)) && (mid >= badVersion ))
        {
            return mid;
        //} else if (isBadVersion(mid)) {
        } else if (mid >= badVersion) {
            high = mid -1;
        } else {
            low = mid +1;
        }
    }
    return -1;
}