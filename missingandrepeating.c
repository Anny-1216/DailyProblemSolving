#include <stdio.h>

void findMissingAndRepeating(int** grid, int n, int* ans) {
    int size = n * n;
    int flat[size];
    int index = 0;

    // Flatten the 2D grid to 1D array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            flat[index++] = grid[i][j];
        }
    }

    // Check count of each number from 1 to n*n
    for (int num = 1; num <= size; num++) {
        int count = 0;
        for (int i = 0; i < size; i++) {
            if (flat[i] == num) {
                count++;
            }
        }

        if (count == 2) ans[0] = num; // Repeating
        else if (count == 0) ans[1] = num; // Missing
    }
}
//optimized solution

#include <stdio.h>
#include <stdlib.h>

void findMissingAndRepeatingOptimized(int** grid, int n, int* ans) {
    int size = n * n;
    int* count = (int*)calloc(size + 1, sizeof(int));

    // Count frequencies
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            count[grid[i][j]]++;
        }
    }

    // Find repeating and missing
    for (int i = 1; i <= size; i++) {
        if (count[i] == 2) ans[0] = i; // Repeating
        else if (count[i] == 0) ans[1] = i; // Missing
    }

    free(count);
}
