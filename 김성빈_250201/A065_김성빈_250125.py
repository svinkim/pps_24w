def main():
    import sys
    input = sys.stdin.readline
    n = int(input())
    points = [tuple(map(int, input().split())) for _ in range(n)]
    points.sort(key=lambda p: (p[0], p[1]))
    out = []
    for x, y in points:
        out.append(f"{x} {y}\n")
    sys.stdout.write("".join(out))

if __name__ == '__main__':
    main()
