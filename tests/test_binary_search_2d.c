#include <binary_search_2d.h>

#include <criterion/criterion.h>

Test(binary_search_2d, test_1) {
    int matrix [3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int *mat[3];
    mat[0] = &matrix[0][0];
    mat[1] = &matrix[1][0];
    mat[2] = &matrix[2][0];

    int target = 3;
    int rows = 3;
    int cols = 4;
    int actual = searchMatrix(mat, rows, &cols, target);
    int expected = 1;
    cr_assert_eq(expected, actual, "Expected %d but got %d", expected, actual);
}