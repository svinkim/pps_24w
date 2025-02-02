#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool halvesAreAlike(string s) {
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int n = s.length();
    int half = n / 2, countA = 0, countB = 0;

    for (int i = 0; i < half; ++i) {
        if (vowels.count(s[i])) ++countA;
        if (vowels.count(s[i + half])) ++countB;
    }
    return countA == countB;
}

int main() {
    string s;
    cin >> s;
    cout << (halvesAreAlike(s) ? "true" : "false") << endl;
    return 0;
}
