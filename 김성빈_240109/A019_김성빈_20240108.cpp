#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int product = A * B * C;
    string productStr = to_string(product);

    vector<int> count(10, 0);
    for (char c : productStr) {
        count[c - '0']++;
    }

    for (int i = 0; i < 10; i++) {
        cout << count[i] << endl;
    }

    return 0;
}
