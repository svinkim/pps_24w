def main():
    import sys
    data = sys.stdin.read().split()
    if not data:
        return
    heights = list(map(int, data))
    expected = sorted(heights)
    count = 0
    for h, e in zip(heights, expected):
        if h != e:
            count += 1
    print(count)

if __name__ == '__main__':
    main()

