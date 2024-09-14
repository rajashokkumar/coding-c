#include <binary_search.h>

#include <criterion/criterion.h>

Test(binary_search, bs_test_mid) {
    int arr[] = {1, 2, 3, 4, 5};
    auto n = 5;
    auto x = 3;
    auto expected = 2;
    auto actual = binary_search(arr, n, x);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}

Test(binary_search, bs_test_low) {
    int arr[] = {1, 2, 3, 4, 5};
    auto n = 5;
    auto x = 1;
    auto expected = 0;
    auto actual = binary_search(arr, n, x);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}

Test(binary_search, bs_test_high) {
    int arr[] = {1, 2, 3, 4, 5};
    auto n = 5;
    auto x = 5;
    auto expected = 4;
    auto actual = binary_search(arr, n, x);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}

Test(binary_search, bs_test_not_found) {
    int arr[] = {1, 2, 3, 4, 5};
    auto n = 5;
    auto x = 6;
    auto expected = -1;
    auto actual = binary_search(arr, n, x);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}
