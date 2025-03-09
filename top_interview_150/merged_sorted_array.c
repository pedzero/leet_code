#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int nums1_index = m - 1;
    int nums2_index = n - 1;

    int i = (m + n - 1);
    while (nums1_index >= 0 || nums2_index >= 0) {
        if (nums1_index < 0) {
            nums1[i--] = nums2[nums2_index--];
            continue;
        }
        if (nums2_index < 0) {
            nums1[i--] = nums1[nums1_index--];
            continue;
        }
        
        if (nums1[nums1_index] >= nums2[nums2_index]) {
            nums1[i--] = nums1[nums1_index--];
        } else {
            nums1[i--] = nums2[nums2_index--];
        }
    }
}

int main() {

    return 0;
}