#include <search_insert_position.h>

#include <criterion/criterion.h>

Test(search_insert_position, sip_test_existing) {
    int nums[] = {1, 3, 5, 6};
    auto target = 5;
    auto expected = 2;
    auto actual = searchInsert(nums, sizeof(nums)/sizeof(nums[0]), target);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}

Test(search_insert_position, sip_test_mid) {
    int nums[] = {1, 3, 5, 6};
    auto target = 1;
    auto expected = 1;
    auto actual = searchInsert(nums, sizeof(nums)/sizeof(nums[0]), target);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}


Test(search_insert_position, sip_test_end) {
    int nums[] = {1, 3, 5, 6};
    auto target = 7;
    auto expected = 4;
    auto actual = searchInsert(nums, sizeof(nums)/sizeof(nums[0]), target);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}

Test(search_insert_position, sip_test_start) {
    int nums[] = {1, 3, 5, 6};
    auto target = 0;
    auto expected = 0;
    auto actual = searchInsert(nums, sizeof(nums)/sizeof(nums[0]), target);
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}
