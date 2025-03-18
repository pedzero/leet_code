#include <stdbool.h>
#include <stdio.h>

int majorityElement(int* nums, int numsSize) {
    int occurrences = 0;
    int element;

    for (size_t i = 0;  i < numsSize; i++) {
        if (occurrences == 0) {
            element = nums[i];
            occurrences = 1;
            continue;
        }

        if (nums[i] == element) {
            occurrences += 1;
        } else {
            occurrences -= 1;
        }
    }

    return element;
}

int main() {

    return 0;
}