def backspaceCompare(s: str, t: str) -> bool:
    i, j = len(s) - 1, len(t) - 1
    while i >= 0 or j >= 0:
        back = 0
        while i >= 0:
            if s[i] == '#':
                back += 1
                i -= 1
            elif back > 0:
                back -= 1
                i -= 1
            else:
                break
        back = 0
        while j >= 0:
            if t[j] == '#':
                back += 1
                j -= 1
            elif back > 0:
                back -= 1
                j -= 1
            else:
                break
        if i >= 0 and j >= 0:
            if s[i] != t[j]:
                return False
        elif i >= 0 or j >= 0:
            return False
        i -= 1
        j -= 1
    return True

print(backspaceCompare("ab#c", "ad#c"))
print(backspaceCompare("ab##", "c#d#"))
print(backspaceCompare("a#c", "b"))