import sys

def main():
    input = sys.stdin.readline
    n = int(input().strip())
    group_count = 0

    for _ in range(n):
        word = input().strip()
        seen = set()
        last_char = ""
        is_group = True
        
        for ch in word:
            if ch != last_char:
                if ch in seen:
                    is_group = False
                    break
                seen.add(ch)
            last_char = ch
        
        if is_group:
            group_count += 1

    sys.stdout.write(str(group_count))

if __name__ == '__main__':
    main()
