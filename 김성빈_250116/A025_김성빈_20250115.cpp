#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

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

bool lemonadeChange(const std::vector<int>& bills) {
    int five = 0, ten = 0;

    for (int bill : bills) {
        if (bill == 5) {
            five++;
        } else if (bill == 10) {
            if (five == 0) return false;
            five--;
            ten++;
        } else { // bill == 20
            if (ten > 0 && five > 0) {
                ten--;
                five--;
            } else if (five >= 3) {
                five -= 3;
            } else {
                return false;
            }
        }
    }

    return true;
}

bool isPowerOfFour(int n) {
    if (n <= 0) return false;
    while (n % 4 == 0) {
        n /= 4;
    }
    return n == 1;
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

    std::vector<int> bills1 = {5, 5, 5, 10, 20};
    std::cout << "Lemonade change possible: " << (lemonadeChange(bills1) ? "true" : "false") << std::endl;

    std::vector<int> bills2 = {5, 5, 10, 10, 20};
    std::cout << "Lemonade change possible: " << (lemonadeChange(bills2) ? "true" : "false") << std::endl;

    int powerTest1 = 16;
    std::cout << powerTest1 << " is power of four: " << (isPowerOfFour(powerTest1) ? "true" : "false") << std::endl;

    int powerTest2 = 5;
    std::cout << powerTest2 << " is power of four: " << (isPowerOfFour(powerTest2) ? "true" : "false") << std::endl;

    int powerTest3 = 1;
    std::cout << powerTest3 << " is power of four: " << (isPowerOfFour(powerTest3) ? "true" : "false") << std::endl;

    return 0;
}
