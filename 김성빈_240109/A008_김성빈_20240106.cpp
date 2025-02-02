#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void solution(int testCases) {
    while (testCases--) {
        int n;
        cin >> n;
        vector<int> scores(n);
        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> scores[i];
            sum += scores[i];
        }

        double average = static_cast<double>(sum) / n;
        int countAboveAverage = 0;

        for (int score : scores) {
            if (score > average) countAboveAverage++;
        }

        double percentage = static_cast<double>(countAboveAverage) / n * 100;
        cout << fixed << setprecision(3) << percentage << "%" << endl;
    }
}

int main() {
    int c;
    cin >> c;
    solution(c);
    return 0;
}

