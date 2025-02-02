def main():
    import sys
    s = sys.stdin.readline().strip()
    filtered = "".join(ch.lower() for ch in s if ch.isalnum())
    sys.stdout.write("true" if filtered == filtered[::-1] else "false")

if __name__ == '__main__':
    main()
