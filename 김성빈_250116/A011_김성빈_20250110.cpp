#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> calculateFailureRate(int N, const std::vector<int>& stages) {
    std::vector<int> stageCounts(N + 2, 0);
    for (int stage : stages) {
        stageCounts[stage]++;
    }

    std::vector<std::pair<double, int>> failureRates;
    int totalPlayers = stages.size();

    for (int i = 1; i <= N; ++i) {
        if (totalPlayers > 0) {
            double failureRate = static_cast<double>(stageCounts[i]) / totalPlayers;
            failureRates.emplace_back(failureRate, i);
            totalPlayers -= stageCounts[i];
        } else {
            failureRates.emplace_back(0.0, i);
        }
    }

    std::sort(failureRates.begin(), failureRates.end(), [](const std::pair<double, int>& a, const std::pair<double, int>& b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first > b.first;
    });

    std::vector<int> result;
    for (const auto& rate : failureRates) {
        result.push_back(rate.second);
    }

    return result;
}

int main() {
    int N1 = 5;
    std::vector<int> stages1 = {2, 1, 2, 6, 2, 4, 3, 3};
    std::vector<int> result1 = calculateFailureRate(N1, stages1);
    for (int stage : result1) {
        std::cout << stage << " ";
    }
    std::cout << std::endl;

    int N2 = 4;
    std::vector<int> stages2 = {4, 4, 4, 4, 4};
    std::vector<int> result2 = calculateFailureRate(N2, stages2);
    for (int stage : result2) {
        std::cout << stage << " ";
    }
    std::cout << std::endl;

    return 0;
}