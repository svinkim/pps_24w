import sys

def is_acceptable(password):
    vowels = set("aeiou")
    # Rule 1: Must contain at least one vowel.
    if not any(ch in vowels for ch in password):
        return False

    consecutive_vowels = 0
    consecutive_consonants = 0
    prev_char = ''
    
    for ch in password:
        if ch in vowels:
            consecutive_vowels += 1
            consecutive_consonants = 0
        else:
            consecutive_consonants += 1
            consecutive_vowels = 0
        
        if consecutive_vowels == 3 or consecutive_consonants == 3:
            return False
        
        if prev_char:
            if ch == prev_char and ch not in ('e', 'o'):
                return False
        prev_char = ch
    
    return True

def main():
    input = sys.stdin.readline
    while True:
        password = input().strip()
        if password == "end":
            break
        if is_acceptable(password):
            sys.stdout.write(f"<{password}> is acceptable.\n")
        else:
            sys.stdout.write(f"<{password}> is not acceptable.\n")

if __name__ == '__main__':
    main()
