import sys

def main():
    cipher_text = sys.stdin.readline().strip()
    plain_text = []
    for ch in cipher_text:

        original_ord = (ord(ch) - ord('A') - 3) % 26 + ord('A')
        plain_text.append(chr(original_ord))
    sys.stdout.write("".join(plain_text))

if __name__ == '__main__':
    main()
