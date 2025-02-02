def main():
    import sys
    data = sys.stdin.read().split()
    m = int(data[0])
    idx = 1
    current_sum = 0
    current_xor = 0
    out = []
    for _ in range(m):
        typ = data[idx]
        idx += 1
        if typ == "1":
            x = int(data[idx])
            idx += 1
            current_sum += x
            current_xor ^= x
        elif typ == "2":
            x = int(data[idx])
            idx += 1
            current_sum -= x
            current_xor ^= x
        elif typ == "3":
            out.append(str(current_sum))
        elif typ == "4":
            out.append(str(current_xor))
    sys.stdout.write("\n".join(out))

if __name__ == '__main__':
    main()
