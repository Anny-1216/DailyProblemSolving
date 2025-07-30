/*
 * Missing and Repeating Numbers in n×n Grid Problem
 * 
 * Problem: Given an n×n grid containing numbers from 1 to n²,
 * find the missing number and the repeating number.
 * 
 * Two Solutions Provided:
 * 1. Brute Force Approach
 * 2. Optimized Hash Table Approach
 */

#include <stdio.h>
#include <stdlib.h>

// SOLUTION 1: Brute Force Approach
/*
 * Time Complexity: O(n⁴) - for each number (n²), we check entire grid (n²)
 * Space Complexity: O(n²) - for flattening the grid
 */
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

/*
 * Time Complexity: O(n²) - single pass through grid + single pass through count array
 * Space Complexity: O(n²) - for count array of size n²+1
 * 
 * Algorithm: Frequency Counting
 * - Count frequency of each number using hash table
 * - Number with frequency 2 is repeating
 * - Number with frequency 0 is missing
 */

// SOLUTION 2: Optimized Hash Table Approach
/*
 * Time Complexity: O(n²) - we traverse the grid twice
 * Space Complexity: O(n) - for the hash table (count array)
 */
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

int main() {
    // Test case: 3x3 grid
    int n = 3;
    int row1[] = {1, 2, 3};
    int row2[] = {4, 5, 6};
    int row3[] = {7, 8, 8}; // 8 is repeated, 9 is missing
    
    int* grid[] = {row1, row2, row3};
    int ans[2] = {0, 0}; // [repeating, missing]
    
    printf("Grid:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
    
    // Test brute force approach
    findMissingAndRepeating(grid, n, ans);
    printf("\nBrute Force Result:\n");
    printf("Repeating number: %d\n", ans[0]);
    printf("Missing number: %d\n", ans[1]);
    
    // Reset ans array
    ans[0] = ans[1] = 0;
    
    // Test optimized approach
    findMissingAndRepeatingOptimized(grid, n, ans);
    printf("\nOptimized Result:\n");
    printf("Repeating number: %d\n", ans[0]);
    printf("Missing number: %d\n", ans[1]);
    
    return 0;
}
