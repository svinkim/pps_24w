#include <iostream>
using namespace std;

int mySqrt(int x) {
    if (x == 0 || x == 1) return x;
    int left = 0, right = x, result = 0;
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (mid * mid <= x) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    int x;
    cin >> x;
    cout << mySqrt(x) << endl;
    return 0;
}
