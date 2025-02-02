#include <iostream>
#include <vector>

std::vector<int> plusOne(std::vector<int>& digits) {
    int n = digits.size();

    for (int i = n - 1; i >= 0; --i) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }

    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    std::vector<int> digits = {1, 2, 3};
    std::vector<int> result = plusOne(digits);

    for (int val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    digits = {4, 3, 2, 1};
    result = plusOne(digits);

    for (int val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    digits = {9};
    result = plusOne(digits);

    for (int val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}