#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(string number, int k) {
    vector<char> stack;
    for (char digit : number) {
        while (!stack.empty() && k > 0 && stack.back() < digit) {
            stack.pop_back();
            --k;
        }
        stack.push_back(digit);
    }
    if (k > 0) {
        stack.resize(stack.size() - k);
    }
    return string(stack.begin(), stack.end());
}

int main() {
    string number1 = "1924";
    int k1 = 2;
    cout << "Result for " << number1 << " with k = " << k1 << ": " << solution(number1, k1) << endl;

    string number2 = "1231234";
    int k2 = 3;
    cout << "Result for " << number2 << " with k = " << k2 << ": " << solution(number2, k2) << endl;

    string number3 = "4177252841";
    int k3 = 4;
    cout << "Result for " << number3 << " with k = " << k3 << ": " << solution(number3, k3) << endl;

    return 0;
}
