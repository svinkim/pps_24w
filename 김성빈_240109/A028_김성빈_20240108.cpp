#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addLargeNumbers(const string& a, const string& b) {
    string result = "";
    int carry = 0, sum = 0;
    int aLength = a.length();
    int bLength = b.length();
    int maxLength = max(aLength, bLength);

    for (int i = 0; i < maxLength; i++) {
        int digitA = (i < aLength) ? a[aLength - 1 - i] - '0' : 0;
        int digitB = (i < bLength) ? b[bLength - 1 - i] - '0' : 0;

        sum = digitA + digitB + carry;
        carry = sum / 10;
        result += (sum % 10) + '0';
    }

    if (carry > 0) {
        result += carry + '0';
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string A, B;
    cin >> A >> B;
    cout << addLargeNumbers(A, B) << endl;
    return 0;
}
