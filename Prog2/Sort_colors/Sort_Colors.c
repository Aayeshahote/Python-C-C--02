#include <stdio.h>

void sortColors(int* nums, int numsSize) {
    int red = 0, white = 0, blue = numsSize - 1;

    while (white <= blue) {
        if (nums[white] == 0) {
            int temp = nums[red];
            nums[red] = nums[white];
            nums[white] = temp;
            red++;
            white++;
        }
        else if (nums[white] == 1) {
            white++;
        }
        else {
            int temp = nums[white];
            nums[white] = nums[blue];
            nums[blue] = temp;
            blue--;
        }
    }
}

int main() {
    int nums1[] = { 2, 0, 2, 1, 1, 0 };
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    sortColors(nums1, size1);
    for (int i = 0; i < size1; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");

    int nums2[] = { 2, 0, 1 };
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    sortColors(nums2, size2);
    for (int i = 0; i < size2; i++) {
        printf("%d ", nums2[i]);
    }
    printf("\n");

    return 0;
}

