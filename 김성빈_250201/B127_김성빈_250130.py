def main():
    import sys
    input = sys.stdin.readline
    n = int(input().strip())
    seq = [int(input().strip()) for _ in range(n)]
    stack = []
    result = []
    current = 1
    for num in seq:
        while current <= num:
            stack.append(current)
            result.append("+")
            current += 1
        if stack[-1] == num:
            stack.pop()
            result.append("-")
        else:
            sys.stdout.write("NO")
            return
    sys.stdout.write("\n".join(result))

if __name__ == '__main__':
    main()
