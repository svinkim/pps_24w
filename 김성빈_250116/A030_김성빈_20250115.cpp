#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef vector<vector<double>> Matrix;

Matrix multiply(const Matrix &a, const Matrix &b) {
    Matrix result(2, vector<double>(2, 0.0));
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return result;
}

Matrix matrixPower(Matrix base, int exp) {
    Matrix result = {{1.0, 0.0}, {0.0, 1.0}};
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = multiply(result, base);
        }
        base = multiply(base, base);
        exp /= 2;
    }
    return result;
}

int main() {
    int N, currentMood;
    cin >> N >> currentMood;

    double p00, p01, p10, p11;
    cin >> p00 >> p01 >> p10 >> p11;

    Matrix P = {{p00, p01}, {p10, p11}};
    Matrix PN = matrixPower(P, N);

    double goodProbability = currentMood == 0 ? PN[0][0] : PN[1][0];
    double badProbability = currentMood == 0 ? PN[0][1] : PN[1][1];

    int goodResult = round(goodProbability * 1000);
    int badResult = round(badProbability * 1000);

    cout << goodResult << endl;
    cout << badResult << endl;

    return 0;
}
