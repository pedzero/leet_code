#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int removeDuplicates(int* nums, int numsSize) {
    size_t unique_index = 1;

    for (size_t i = 1; i < numsSize; i += 1) {
        if (nums[i] != nums[unique_index - 1]) {
            nums[unique_index++] = nums[i];
        }
    }

    return unique_index;
}

int main() {
    int example[10] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = removeDuplicates(example, 10);
    printf("k: %d\n", k);
    for (size_t i = 0; i < 10; i += 1) {
        if (i < k) {
            printf("%d, ", example[i]);
        } else {
            printf("_, ");
        }
        }

    return 0;
}