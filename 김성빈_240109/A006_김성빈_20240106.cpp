#include <string>
#include <algorithm> // transform 함수 사용을 위해 포함

using namespace std;

bool solution(string s) {
    int pCount = 0, yCount = 0;

    for (char c : s) {
        if (tolower(c) == 'p') pCount++;
        if (tolower(c) == 'y') yCount++;
    }

    return pCount == yCount;
}
#include <iostream>

int main() {
    string test1 = "pPoooyY";
    string test2 = "Pyy";
    string test3 = "abc";

    cout << solution(test1) << endl; 
    cout << solution(test2) << endl; 
    cout << solution(test3) << endl; 

    return 0;
}
