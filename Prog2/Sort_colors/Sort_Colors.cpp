#include <iostream>
#include <vector>

void sortColors(std::vector<int>& nums) {
    int red = 0, white = 0, blue = nums.size() - 1;

    while (white <= blue) {
        if (nums[white] == 0) {
            std::swap(nums[red], nums[white]);
            red++;
            white++;
        }
        else if (nums[white] == 1) {
            white++;
        }
        else {
            std::swap(nums[white], nums[blue]);
            blue--;
        }
    }
}

int main() {
    std::vector<int> nums1 = { 2, 0, 2, 1, 1, 0 };
    sortColors(nums1);
    for (int i = 0; i < nums1.size(); i++) {
        std::cout << nums1[i] << " ";
    }
    std::cout << std::endl;

    std::vector<int> nums2 = { 2, 0, 1 };
    sortColors(nums2);
    for (int i = 0; i < nums2.size(); i++) {
        std::cout << nums2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

