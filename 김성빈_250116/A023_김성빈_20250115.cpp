#include <iostream>
#include <vector>
#include <algorithm>

int numRescueBoats(std::vector<int>& people, int limit) {
    std::sort(people.begin(), people.end());
    int left = 0, right = people.size() - 1;
    int boats = 0;

    while (left <= right) {
        if (people[left] + people[right] <= limit) {
            left++;
        }
        right--;
        boats++;
    }

    return boats;
}

int addDigits(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

int main() {
    std::vector<int> people1 = {70, 50, 80, 50};
    int limit1 = 100;
    std::cout << "Minimum boats needed: " << numRescueBoats(people1, limit1) << std::endl;

    std::vector<int> people2 = {70, 80, 50};
    int limit2 = 100;
    std::cout << "Minimum boats needed: " << numRescueBoats(people2, limit2) << std::endl;

    int num1 = 38;
    std::cout << "Add digits result for " << num1 << ": " << addDigits(num1) << std::endl;

    int num2 = 0;
    std::cout << "Add digits result for " << num2 << ": " << addDigits(num2) << std::endl;

    return 0;
}
