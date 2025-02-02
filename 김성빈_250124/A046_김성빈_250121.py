import sys

def main():
    input = sys.stdin.readline
    n = int(input().strip())
    freq = {}
    for _ in range(n):
        name = input().strip()
        first_letter = name[0]
        freq[first_letter] = freq.get(first_letter, 0) + 1

    result = [letter for letter, count in freq.items() if count >= 5]
    if not result:
        sys.stdout.write("PREDAJA")
    else:
        result.sort()
        sys.stdout.write("".join(result))

if __name__ == '__main__':
    main()
