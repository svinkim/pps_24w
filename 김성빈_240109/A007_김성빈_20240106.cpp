#include <iostream>
#include <vector>

using namespace std;

string solution(const vector<int>& sequence) {
    if (sequence == vector<int>{1, 2, 3, 4, 5, 6, 7, 8}) return "ascending";
    if (sequence == vector<int>{8, 7, 6, 5, 4, 3, 2, 1}) return "descending";
    return "mixed";
}

int main() {
    vector<int> sequence(8);
    for (int i = 0; i < 8; i++) {
        cin >> sequence[i];
    }
    cout << solution(sequence) << endl;
    return 0;
}
