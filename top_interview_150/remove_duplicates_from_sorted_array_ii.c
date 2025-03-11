#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int* nums, int numsSize) {
    size_t unique_index = 1;
    size_t occurrences_count = 1;

    for (size_t i = 1; i < numsSize; i += 1) {
        if ((occurrences_count++ < 2 && nums[i] == nums[unique_index - 1])) {
            nums[unique_index++] = nums[i];
            continue;
        }

        if (nums[i] != nums[unique_index - 1]) {
            nums[unique_index++] = nums[i];
            occurrences_count = 1;
            continue;
        }
    }

    return unique_index;
}

int main() {
    int example[9] = {0, 0, 1, 1, 1, 1, 2, 3, 3};
    int k = removeDuplicates(example, 9);

    printf("k: %d\n", k);
    for (size_t i = 0; i < 9; i += 1) {
        if (i < k) {
            printf("%d, ", example[i]);
        } else {
            printf("_, ");
        }
    }

    return 0;
}