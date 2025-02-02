def addBinary(a, b):
    i = len(a) - 1
    j = len(b) - 1
    carry = 0
    res = []
    while i >= 0 or j >= 0 or carry:
        x = int(a[i]) if i >= 0 else 0
        y = int(b[j]) if j >= 0 else 0
        s = x + y + carry
        res.append(str(s % 2))
        carry = s // 2
        i -= 1
        j -= 1
    return "".join(res[::-1])

def main():
    a = input().strip()
    b = input().strip()
    print(addBinary(a, b))

if __name__ == '__main__':
    main()
