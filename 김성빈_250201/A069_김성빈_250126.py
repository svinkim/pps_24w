def main():
    import sys
    from collections import deque
    input = sys.stdin.readline
    n, k = map(int, input().split())
    dq = deque(range(1, n + 1))
    res = []
    while dq:
        dq.rotate(- (k - 1))
        res.append(dq.popleft())
    sys.stdout.write("<" + ", ".join(map(str, res)) + ">")

if __name__ == '__main__':
    main()
