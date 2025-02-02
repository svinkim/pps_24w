#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int k, n;
        cin >> k >> n;

        vector<int> floor(n + 1);
        for (int i = 1; i <= n; i++) {
            floor[i] = i;
        }

        for (int i = 1; i <= k; i++) {
            for (int j = 1; j <= n; j++) {
                floor[j] += floor[j - 1];
            }
        }

        cout << floor[n] << endl;
    }

    return 0;
}
