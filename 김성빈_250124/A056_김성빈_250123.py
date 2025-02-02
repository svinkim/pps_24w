def main():
    import sys
    lines = sys.stdin.read().splitlines()
    if not lines: 
        return
    nums1 = list(map(int, lines[0].split()))
    nums2 = list(map(int, lines[1].split()))
    mapping = {}
    stack = []
    for num in nums2:
        while stack and stack[-1] < num:
            mapping[stack.pop()] = num
        stack.append(num)
    while stack:
        mapping[stack.pop()] = -1
    res = [str(mapping[num]) for num in nums1]
    sys.stdout.write(" ".join(res))

if __name__ == '__main__':
    main()
