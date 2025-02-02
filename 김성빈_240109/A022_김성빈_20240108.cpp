#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> times(N);
    int yCost = 0, mCost = 0;

    for (int i = 0; i < N; i++) {
        cin >> times[i];
        yCost += (times[i] / 30 + 1) * 10;
        mCost += (times[i] / 60 + 1) * 15;
    }

    if (yCost < mCost) {
        cout << "Y " << yCost << endl;
    } else if (mCost < yCost) {
        cout << "M " << mCost << endl;
    } else {
        cout << "Y M " << yCost << endl;
    }

    return 0;
}
