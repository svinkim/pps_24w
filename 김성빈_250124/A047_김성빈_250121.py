import sys

def main():
    s = sys.stdin.readline().strip()
    for i in range(0, len(s), 10):
        sys.stdout.write(s[i:i+10] + "\n")

if __name__ == '__main__':
    main()
