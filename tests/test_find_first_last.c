#include <find_first_last.h>

#include <criterion/criterion.h>

Test(find_first_last, test_1) {
    int arr[] = {5,7,7,8,8,10};
    auto target = 8;
    int actualretSize = 0;
    
    auto expectedRetSize = 2;
    auto actual = searchRange(arr, sizeof(arr)/sizeof(arr[0]), target, &actualretSize);
    cr_assert_eq(expectedRetSize, actualretSize, "Expected %d but got %d", expectedRetSize, actualretSize);
}