def main():
    import sys
    input = sys.stdin.readline
    n = int(input().strip())
    res = []
    for i in range(1, n + 1):
        if i % 15 == 0:
            res.append("FizzBuzz")
        elif i % 3 == 0:
            res.append("Fizz")
        elif i % 5 == 0:
            res.append("Buzz")
        else:
            res.append(str(i))
    sys.stdout.write("\n".join(res))

if __name__ == '__main__':
    main()
