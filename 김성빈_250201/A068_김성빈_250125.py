import sys
from collections import deque

def main():
    input = sys.stdin.readline
    n = int(input())
    dq = deque()
    output = []
    for _ in range(n):
        cmd = input().split()
        if cmd[0] == "push":
            dq.append(cmd[1])
        elif cmd[0] == "pop":
            output.append(dq.popleft() if dq else "-1")
        elif cmd[0] == "size":
            output.append(str(len(dq)))
        elif cmd[0] == "empty":
            output.append("0" if dq else "1")
        elif cmd[0] == "front":
            output.append(dq[0] if dq else "-1")
        elif cmd[0] == "back":
            output.append(dq[-1] if dq else "-1")
    sys.stdout.write("\n".join(output))

if __name__ == '__main__':
    main()
