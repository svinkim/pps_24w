#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int maxPeople = 0, currentPeople = 0;

    for (int i = 0; i < 4; i++) {
        int out, in;
        cin >> out >> in;

        currentPeople -= out;
        currentPeople += in;

        maxPeople = max(maxPeople, currentPeople);
    }

    cout << maxPeople << endl;

    return 0;
}
