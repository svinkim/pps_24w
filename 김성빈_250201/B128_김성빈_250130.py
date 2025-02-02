def main():
    import sys
    input = sys.stdin.readline
    available = input().strip()
    fixed = list(map(int, input().split()))
    best = 0
    for d4 in range(1, 7):
        for d5 in range(1, 7):
            dice = fixed + [d4, d5]
            total = sum(dice)
            sorted_dice = sorted(dice)
            cnt = [0] * 7
            for d in dice:
                cnt[d] += 1
            scores = [0] * 12
            # Ones ~ Sixes
            for i in range(1, 7):
                scores[i-1] = cnt[i] * i
            # Four of a Kind
            for face in range(1, 7):
                if cnt[face] >= 4:
                    scores[6] = face * 4
                    break
            # Full House
            if len([c for c in cnt if c > 0]) == 2 and (3 in cnt and 2 in cnt):
                scores[7] = total
            # Little Straight
            if sorted_dice == [1,2,3,4,5]:
                scores[8] = 30
            # Big Straight
            if sorted_dice == [2,3,4,5,6]:
                scores[9] = 30
            # Yacht
            if max(cnt) == 5:
                scores[10] = 50
            # Choice
            scores[11] = total
            candidate = 0
            for i in range(12):
                if available[i] == 'Y' and scores[i] > candidate:
                    candidate = scores[i]
            if candidate > best:
                best = candidate
    sys.stdout.write(str(best))

if __name__ == '__main__':
    main()
