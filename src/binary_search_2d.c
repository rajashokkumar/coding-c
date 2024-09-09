#include <binary_search_2d.h>


int getvalue(int ** matrix, int sindex, int colsize)
{
    int r = 0;
    int c = 0;
    int ret = 0;
    r = sindex/colsize;
    c = sindex%colsize;
    ret = matrix[r][c];
    return ret;
}
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int start = 0;
    int end = matrixSize * (*matrixColSize) - 1;
    int mid = 0;
    int value = 0;

    while(start <= end)
    {
        mid = start + (end - start) /2;
        value = getvalue(matrix, mid,   *matrixColSize);
        if (value == target)
        {
            return 1;
        }
        if (value < target)
        {
            start = mid+1;
        } else {
            end = mid - 1;
        }
    }
    return 0;
}