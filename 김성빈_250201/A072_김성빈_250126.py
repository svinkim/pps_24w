def main():
    import sys
    date = sys.stdin.readline().strip()
    year, month, day = int(date[:4]), int(date[5:7]), int(date[8:])
    leap = (year % 400 == 0) or (year % 4 == 0 and year % 100 != 0)
    mdays = [31, 29 if leap else 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    result = sum(mdays[:month - 1]) + day
    sys.stdout.write(str(result))

if __name__ == '__main__':
    main()
