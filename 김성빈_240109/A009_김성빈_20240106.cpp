#include <string>

using namespace std;

bool solution(string s) {
    if (s.length() != 4 && s.length() != 6) return false;
    for (char c : s) {
        if (!isdigit(c)) return false;
    }
    return true;
}

#include <iostream>

int main() {
    cout << solution("a234") << endl; // 0 (false)
    cout << solution("1234") << endl; // 1 (true)
    return 0;
}
