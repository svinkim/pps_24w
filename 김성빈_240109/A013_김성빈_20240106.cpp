#include <vector>

using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num;
    }
    return result;
}

#include <iostream>

int main() {
    vector<int> nums1 = {2, 2, 1};
    vector<int> nums2 = {4, 1, 2, 1, 2};
    vector<int> nums3 = {1};

    cout << singleNumber(nums1) << endl; // 1
    cout << singleNumber(nums2) << endl; // 4
    cout << singleNumber(nums3) << endl; // 1

    return 0;
}
