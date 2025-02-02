#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> plugs(N);
    int total = 0;

    for (int i = 0; i < N; i++) {
        cin >> plugs[i];
        total += plugs[i];
    }

    cout << total - (N - 1) << endl;

    return 0;
}
