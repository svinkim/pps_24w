#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string solution(string s) {
    bool newWord = true;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ' ') {
            newWord = true;
        } else {
            if (newWord) {
                s[i] = toupper(s[i]);
                newWord = false;
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    return s;
}

int main() {
    string s1 = "3people unFollowed me";
    string s2 = "for the last week";
    cout << solution(s1) << endl; // Output: "3people Unfollowed Me"
    cout << solution(s2) << endl; // Output: "For The Last Week"
    return 0;
}
