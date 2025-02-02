#include <iostream>
#include <vector>
using namespace std;

void openDoors(long long N, int firstDoor) {
    vector<int> doors(N);
    doors[0] = firstDoor;

    for (long long i = 1; i < N; ++i) {
        if (i % 2 == 0) { 
            doors[i] = doors[i - 2]; 
        } else {
            doors[i] = 1 - doors[i - 1];
        }
    }

    for (long long i = 1; i < N; ++i) {
        cout << doors[i] << '\n';
    }
}

int main() {
    long long N;
    int firstDoor;
    cin >> N >> firstDoor;

    if (N > 2500000000LL) {
        cout << "Love is open door" << endl;
        return 0;
    }

    openDoors(N, firstDoor);
    return 0;
}
