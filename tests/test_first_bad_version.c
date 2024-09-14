#include <first_bad_version.h>

#include <criterion/criterion.h>

Test(find_bad_version, fbv_test_1) {
    int n = 4;
    int expected = 4;
    auto actual = firstBadVersion(n, expected);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);   
}

Test(find_bad_version, fbv_test_2) {
    int n = 1;
    int expected = 1;
    auto actual = firstBadVersion(n, expected);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);   
}