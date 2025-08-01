#include <stdio.h>
#include <stdlib.h>

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    *returnSize = numRows;

    // Allocate memory for array of pointers (rows)
    int** triangle = (int**)malloc(numRows * sizeof(int*));

    // Allocate memory to store sizes of each row
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));

    for (int i = 0; i < numRows; i++) {
        // Each row has i+1 elements
        (*returnColumnSizes)[i] = i + 1;
        triangle[i] = (int*)malloc((i + 1) * sizeof(int));

        triangle[i][0] = 1;  // First element
        triangle[i][i] = 1;  // Last element

        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    return triangle;
}
