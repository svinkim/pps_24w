def main():
    import sys
    input = sys.stdin.readline
    mod = 1000000000
    N, K = map(int, input().split())
    dp = [[0] * (N + 1) for _ in range(K + 1)]
    for j in range(N + 1):
        dp[1][j] = 1
    for i in range(2, K + 1):
        dp[i][0] = 1
        for j in range(1, N + 1):
            dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % mod
    sys.stdout.write(str(dp[K][N]))

if __name__ == '__main__':
    main()
