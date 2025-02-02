def checkRecord(s: str) -> bool:
    a_count = 0
    late_streak = 0
    for c in s:
        if c == 'A':
            a_count += 1
        if a_count >= 2:
            return False
        if c == 'L':
            late_streak += 1
            if late_streak >= 3:
                return False
        else:
            late_streak = 0
    return True

print(checkRecord("PPALLP"))
print(checkRecord("PPALLL"))
