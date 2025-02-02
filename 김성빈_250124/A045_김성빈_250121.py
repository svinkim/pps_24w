import sys
from collections import Counter

def main():
    word = sys.stdin.readline().strip().upper()
    cnt = Counter(word)
    most_common = cnt.most_common()
    
    if len(most_common) > 1 and most_common[0][1] == most_common[1][1]:
        sys.stdout.write('?')
    else:
        sys.stdout.write(most_common[0][0])

if __name__ == '__main__':
    main()
