#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> summaryRanges(const std::vector<int>& nums) {
    std::vector<std::string> result;
    if (nums.empty()) return result;

    int start = nums[0];

    for (size_t i = 1; i <= nums.size(); ++i) {
        if (i == nums.size() || nums[i] != nums[i - 1] + 1) {
            if (start == nums[i - 1]) {
                result.push_back(std::to_string(start));
            } else {
                result.push_back(std::to_string(start) + "->" + std::to_string(nums[i - 1]));
            }
            if (i < nums.size()) start = nums[i];
        }
    }

    return result;
}

int main() {
    std::vector<int> nums1 = {0, 1, 2, 4, 5, 7};
    std::vector<std::string> result1 = summaryRanges(nums1);
    for (const auto& range : result1) {
        std::cout << range << " ";
    }
    std::cout << std::endl;

    std::vector<int> nums2 = {0, 2, 3, 4, 6, 8, 9};
    std::vector<std::string> result2 = summaryRanges(nums2);
    for (const auto& range : result2) {
        std::cout << range << " ";
    }
    std::cout << std::endl;

    return 0;
}
