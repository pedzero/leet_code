#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rotate(int* nums, int numsSize, int k) {
    k %= numsSize;
    int* nums_copy = (int*)malloc(sizeof(int) * numsSize);
    memcpy(nums_copy, nums, sizeof(int) * numsSize);
    
    for (size_t i = 0, j = (numsSize - k); i < numsSize; i += 1, j += 1) {
        if (j == numsSize) {
            j = 0;
        }
        nums[i] = nums_copy[j];
    }
}

int main() {
    
    return 0;
}