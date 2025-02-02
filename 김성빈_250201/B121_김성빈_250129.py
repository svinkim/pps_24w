def main():
    import sys
    input = sys.stdin.readline
    n = int(input().strip())
    arr = list(map(int, input().split()))
    ans = [-1] * n
    stack = []
    for i in range(n):
        while stack and arr[stack[-1]] < arr[i]:
            ans[stack.pop()] = arr[i]
        stack.append(i)
    sys.stdout.write(" ".join(map(str, ans)))

if __name__ == '__main__':
    main()
