#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> numbers(5);
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
        sum += pow(numbers[i], 2);
    }

    cout << sum % 10 << endl;

    return 0;
}
