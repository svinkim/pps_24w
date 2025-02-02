def main():
    s = input().strip()
    ans = []
    level = 0
    for c in s:
        if c == '(':
            if level:
                ans.append(c)
            level += 1
        else:
            level -= 1
            if level:
                ans.append(c)
    print("".join(ans))

if __name__ == '__main__':
    main()
