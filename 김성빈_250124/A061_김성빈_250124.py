def main():
    import sys
    data = sys.stdin.read().split()
    if not data:
        return
    n = int(data[0])
    res = []
    while n:
        n -= 1
        res.append(chr(n % 26 + ord('A')))
        n //= 26
    sys.stdout.write("".join(res[::-1]))

if __name__ == '__main__':
    main()
