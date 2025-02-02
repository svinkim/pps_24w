#include <iostream>
#include <vector>
using namespace std;

bool isSelfDividing(int num) {
    int n = num;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 0 || num % digit != 0) return false;
        n /= 10;
    }
    return true;
}

vector<int> selfDividingNumbers(int left, int right) {
    vector<int> result;
    for (int i = left; i <= right; ++i) {
        if (isSelfDividing(i)) result.push_back(i);
    }
    return result;
}

int main() {
    int left, right;
    cin >> left >> right;
    vector<int> result = selfDividingNumbers(left, right);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
