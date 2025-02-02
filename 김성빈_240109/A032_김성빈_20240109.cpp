#include <iostream>
#include <vector>

using namespace std;

int main() {
    int maxScore = 0, winner = 0;

    for (int i = 1; i <= 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            int score;
            cin >> score;
            sum += score;
        }
        if (sum > maxScore) {
            maxScore = sum;
            winner = i;
        }
    }

    cout << winner << " " << maxScore << endl;
    return 0;
}
