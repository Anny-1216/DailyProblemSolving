#include <stdlib.h>

int* applyOperations(int* nums, int numsSize, int* returnSize) {
    // Step 1: Apply doubling and zeroing
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            nums[i] *= 2;
            nums[i + 1] = 0;
        }
    }

    // Step 2: Move non-zero elements to front
    int* result = (int*)malloc(sizeof(int) * numsSize);
    int idx = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            result[idx++] = nums[i];
        }
    }

    // Fill the rest with zeros
    while (idx < numsSize) {
        result[idx++] = 0;
    }

    *returnSize = numsSize;
    return result;
}
