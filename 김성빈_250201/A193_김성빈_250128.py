def main():
    import sys
    input = sys.stdin.readline
    N = int(input().strip())
    print(" ".join(["long"] * (N // 4)) + " int")

if __name__ == '__main__':
    main()
