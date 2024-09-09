#include <binary_search.h>

int binary_search(int *arr, int n, int x) {
    auto low = 0;
    auto high = n - 1;
    while (low <= high) {
        auto mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}
