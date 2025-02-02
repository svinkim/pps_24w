#include <iostream>
#include <vector>
#include <algorithm>

int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
    std::sort(g.begin(), g.end());
    std::sort(s.begin(), s.end());

    int i = 0;
    int j = 0;

    while (i < g.size() && j < s.size()) {
        if (s[j] >= g[i]) {
            i++;
        }
        j++;
    }

    return i;
}

int main() {
    std::vector<int> g = {1, 2, 3};
    std::vector<int> s = {1, 1};

    int result = findContentChildren(g, s);
    std::cout << "Maximum number of content children: " << result << std::endl;

    g = {1, 2};
    s = {1, 2, 3};

    result = findContentChildren(g, s);
    std::cout << "Maximum number of content children: " << result << std::endl;

    return 0;
}
