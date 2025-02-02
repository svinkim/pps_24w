def main():
    import sys
    s = sys.stdin.readline().strip()
    print("".join(sorted(s, reverse=True)))

if __name__ == '__main__':
    main()
