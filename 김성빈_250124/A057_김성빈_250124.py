
def solution(cookie):
    n = len(cookie)
    ans = 0
    for i in range(n - 1):
        left = i
        right = i + 1
        s_left = cookie[left]
        s_right = cookie[right]
        while left >= 0 and right < n:
            if s_left == s_right:
                ans = max(ans, s_left)
                left -= 1
                right += 1
                if left >= 0:
                    s_left += cookie[left]
                if right < n:
                    s_right += cookie[right]
            elif s_left < s_right:
                left -= 1
                if left < 0:
                    break
                s_left += cookie[left]
            else:
                right += 1
                if right >= n:
                    break
                s_right += cookie[right]
    return ans

if __name__ == '__main__':
    cookie = list(map(int, input().split()))
    print(solution(cookie))
