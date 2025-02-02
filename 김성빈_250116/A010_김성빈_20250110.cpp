#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int compressString(const std::string& s) {
    int n = s.size();
    int minLength = n;

    for (int len = 1; len <= n / 2; ++len) {
        std::string compressed;
        std::string prev = s.substr(0, len);
        int count = 1;

        for (int j = len; j < n; j += len) {
            std::string current = s.substr(j, len);
            if (current == prev) {
                count++;
            } else {
                if (count > 1) {
                    compressed += std::to_string(count);
                }
                compressed += prev;
                prev = current;
                count = 1;
            }
        }

        if (count > 1) {
            compressed += std::to_string(count);
        }
        compressed += prev;

        minLength = std::min(minLength, static_cast<int>(compressed.size()));
    }

    return minLength;
}

int main() {
    std::vector<std::string> testCases = {
        "aabbaccc",
        "ababcdcdababcdcd",
        "abcabcdede",
        "abcabcabcabcdededededede",
        "xababcdcdababcdcd"
    };

    for (const auto& testCase : testCases) {
        std::cout << "Compressed length of \"" << testCase << "\": " << compressString(testCase) << std::endl;
    }

    return 0;
}
