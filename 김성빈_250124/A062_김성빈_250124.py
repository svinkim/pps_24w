def solution(a, b):
    days_in_month = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    total = sum(days_in_month[:a - 1]) + (b - 1)
    week = ["FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"]
    return week[total % 7]

if __name__ == '__main__':
    a, b = map(int, input().split())
    print(solution(a, b))
