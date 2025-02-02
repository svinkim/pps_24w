def main():
    import sys
    input = sys.stdin.readline
    t = int(input().strip())
    costs = [tuple(map(int, input().split())) for _ in range(t)]
    costs.sort(key=lambda x: x[0] - x[1])
    n = t // 2
    ans = sum(a for a, b in costs[:n]) + sum(b for a, b in costs[n:])
    sys.stdout.write(str(ans))

if __name__ == '__main__':
    main()
