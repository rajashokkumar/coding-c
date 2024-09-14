#include <find_first_last.h>

#include <criterion/criterion.h>

Test(find_first_last, ffl_test_1) {
    int arr[] = {5,7,7,8,8,10};
    auto target = 8;
    int actualretSize = 0;
    
    auto expectedRetSize = 2;
    int expected[] = {3,4};
    int *actual = searchRange(arr, sizeof(arr)/sizeof(arr[0]), target, &actualretSize);
    cr_assert_eq(expectedRetSize, actualretSize, "Expected %d but got %d", expectedRetSize, actualretSize);
    cr_assert_eq(expected[0], actual[0], "Expected %d but got %d", expected[0], actual[0]);
    cr_assert_eq(expected[1], actual[1], "Expected %d but got %d", expected[1], actual[1]);

    
}