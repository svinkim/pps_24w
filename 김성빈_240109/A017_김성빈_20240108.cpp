#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    string n;
    cin >> n;

    vector<int> count(10, 0);

    for (char c : n) {
        count[c - '0']++;
    }

    int sixNineCount = count[6] + count[9];
    count[6] = count[9] = ceil(sixNineCount / 2.0);

    int maxSets = 0;
    for (int i = 0; i < 10; i++) {
        maxSets = max(maxSets, count[i]);
    }

    cout << maxSets << endl;

    return 0;
}
