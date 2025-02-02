def main():
    t = int(input())
    for _ in range(t):
        s = input().strip()
        total = 0
        streak = 0
        for ch in s:
            if ch == 'O':
                streak += 1
                total += streak
            else:
                streak = 0
        print(total)

if __name__ == '__main__':
    main()
