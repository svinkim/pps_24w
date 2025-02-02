def main():
    import sys
    input_data = sys.stdin.read().split()
    nums = list(map(int, input_data))
    max_n = 0
    for n in nums:
        if n == 0:
            break
        if n > max_n:
            max_n = n
    sieve_limit = 2 * max_n
    sieve = [True] * (sieve_limit + 1)
    sieve[0] = sieve[1] = False
    for i in range(2, int(sieve_limit ** 0.5) + 1):
        if sieve[i]:
            for j in range(i * i, sieve_limit + 1, i):
                sieve[j] = False
    prefix = [0] * (sieve_limit + 1)
    cnt = 0
    for i in range(sieve_limit + 1):
        if sieve[i]:
            cnt += 1
        prefix[i] = cnt
    out = []
    for n in nums:
        if n == 0:
            break
        out.append(str(prefix[2 * n] - prefix[n]))
    sys.stdout.write("\n".join(out))

if __name__ == '__main__':
    main()
