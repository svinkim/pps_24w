def main():
    import sys
    input = sys.stdin.readline
    n = int(input().strip())
    stack = []
    for _ in range(n):
        cmd = input().split()
        if cmd[0] == 'push':
            stack.append(cmd[1])
        elif cmd[0] == 'pop':
            print(stack.pop() if stack else -1)
        elif cmd[0] == 'size':
            print(len(stack))
        elif cmd[0] == 'empty':
            print(0 if stack else 1)
        elif cmd[0] == 'top':
            print(stack[-1] if stack else -1)

if __name__ == '__main__':
    main()
