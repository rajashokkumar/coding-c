#include <find_min_rotated_sorted.h>

#include <criterion/criterion.h>

Test(find_min_rotated_sorted, test_1) {
    int arr[] = {3,4,5,1,2};
    auto size = sizeof(arr)/sizeof(arr[0]);
    auto expected = 1;
    auto actual = findMin(arr, size);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}

Test(find_min_rotated_sorted, test_2) {
    int arr[] = {4,5,6,7,0,1,2};
    auto size = sizeof(arr)/sizeof(arr[0]);
    auto expected = 0;
    auto actual = findMin(arr, size);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}


Test(find_min_rotated_sorted, test_3) {
    int arr[] = {11,13,15,17};
    auto size = sizeof(arr)/sizeof(arr[0]);
    auto expected = 11;
    auto actual = findMin(arr, size);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}


Test(find_min_rotated_sorted, test_4) {
    int arr[] = {5,1,2,3,4};
    auto size = sizeof(arr)/sizeof(arr[0]);
    auto expected = 1;
    auto actual = findMin(arr, size);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}



Test(find_min_rotated_sorted, test_5) {
    int arr[] = {3,1,2};
    auto size = sizeof(arr)/sizeof(arr[0]);
    auto expected = 1;
    auto actual = findMin(arr, size);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}
