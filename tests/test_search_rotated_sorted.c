#include <search_rotated_sorted.h>

#include <criterion/criterion.h>


Test(search_rotated_sorted, srs_test_2) {
    int arr[] = {4,5,6,7,0,1,2};
    auto size = sizeof(arr)/sizeof(arr[0]);
    auto target = 3;
    auto expected = -1;
    auto actual = search_rotated(arr, size, target);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}

Test(search_rotated_sorted, srs_test_3) {
    int arr[] = {1};
    auto size = sizeof(arr)/sizeof(arr[0]);
    auto target = 0;
    auto expected = -1;
    auto actual = search_rotated(arr, size, target);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}


Test(search_rotated_sorted, srs_test_4) {
    int arr[] = {1};
    auto size = sizeof(arr)/sizeof(arr[0]);
    auto target = 1;
    auto expected = 0;
    auto actual = search_rotated(arr, size, target);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}

Test(search_rotated_sorted, srs_test_1) {
    int arr[] = {4,5,6,7,0,1,2};
    auto size = sizeof(arr)/sizeof(arr[0]);
    auto target = 0;
    auto expected = 4;
    auto actual = search_rotated(arr, size, target);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}


Test(search_rotated_sorted, srs_test_5) {
    int arr[] = {5,1,3};
    auto size = sizeof(arr)/sizeof(arr[0]);
    auto target = 5;
    auto expected = 0;
    auto actual = search_rotated(arr, size, target);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}

Test(search_rotated_sorted, srs_test_6) {
    int arr[] = {4,5,6,7,8,1,2,3};
    auto size = sizeof(arr)/sizeof(arr[0]);
    auto target = 8;
    auto expected = 4;
    auto actual = search_rotated(arr, size, target);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}

Test(search_rotated_sorted, srs_test_7) {
    int arr[] = {5,1,2,3,4};
    auto size = sizeof(arr)/sizeof(arr[0]);
    auto target = 1;
    auto expected = 1;
    auto actual = search_rotated(arr, size, target);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}