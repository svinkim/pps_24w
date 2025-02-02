#include <string>

using namespace std;

bool solution(int x) {
    int sum = 0;
    int temp = x;
    
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    
    return x % sum == 0;
}

#include <iostream>

int main() {
    cout << solution(10) << endl; // true
    cout << solution(12) << endl; // true
    cout << solution(11) << endl; // false
    cout << solution(13) << endl; // false

    return 0;
}
