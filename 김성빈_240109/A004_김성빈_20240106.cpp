#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> result;

    for (int num : arr) {
        if (num % divisor == 0) {
            result.push_back(num);
        }
    }

    if (result.empty()) {
        return {-1};
    }

    sort(result.begin(), result.end());

    return result;
}

#include <iostream>

int main() {
    vector<int> arr1 = {5, 9, 7, 10};
    vector<int> arr2 = {2, 36, 1, 3};
    vector<int> arr3 = {3, 2, 6};

    vector<int> result1 = solution(arr1, 5);
    vector<int> result2 = solution(arr2, 1);
    vector<int> result3 = solution(arr3, 10);

    for (int num : result1) cout << num << " ";
    cout << endl;

    for (int num : result2) cout << num << " "; 
    cout << endl;

    for (int num : result3) cout << num << " ";
    cout << endl;

    return 0;
}




