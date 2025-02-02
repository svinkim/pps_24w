#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

double performOperation(double value, char operation) {
    if (operation == '@') return value * 3;
    if (operation == '%') return value + 5;
    if (operation == '#') return value - 7;
    return value;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();

    for (int t = 0; t < T; t++) {
        string input;
        getline(cin, input);
        stringstream ss(input);

        double value;
        ss >> value;

        char operation;
        while (ss >> operation) {
            value = performOperation(value, operation);
        }

        cout << fixed << setprecision(2) << value << endl;
    }

    return 0;
}
