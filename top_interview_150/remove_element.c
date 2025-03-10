#include <stdio.h>
#include <stdlib.h>

int removeElement(int* nums, int numsSize, int val) {
    int j = 0;
    for (int i = 0; i < numsSize; i += 1) {
        if (nums[i] != val) {
            nums[j] = nums[i];
            j += 1;
        }
    }
    return j;
}

int main() {
    
    return 0;
}