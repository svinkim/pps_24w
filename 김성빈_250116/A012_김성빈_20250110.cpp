#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int countPrimes(int n) {
    if (n <= 2) return 0;

    std::vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    return std::count(isPrime.begin(), isPrime.end(), true);
}

int main() {
    int n1 = 10;
    std::cout << "Number of primes less than " << n1 << ": " << countPrimes(n1) << std::endl;

    int n2 = 0;
    std::cout << "Number of primes less than " << n2 << ": " << countPrimes(n2) << std::endl;

    int n3 = 1;
    std::cout << "Number of primes less than " << n3 << ": " << countPrimes(n3) << std::endl;

    return 0;
}
