def main():
    print("Enter the time of starting your call in 24-hour format")
    hour = int(input("Enter hour: "))
    min = int(input("Enter minutes: "))

    if hour < 0 or hour > 23 or min < 0 or min > 59:
        print("Invalid input for time!")
        return 1

    day = int(input("Enter the day of your call (1 for Monday, 7 for Sunday): "))

    if day < 1 or day > 7:
        print("Invalid input for day!")
        return 1

    tdur = 0
    dur = int(input("Enter the duration of your call in minutes: "))
    if dur < 0:
        print("Invalid input for duration!")
        return 1
    tdur += dur

    print(
        "If you have more time extensions, enter the number of minutes. To end input, enter -1."
    )
    while True:
        dur = int(input("Enter time extension: "))
        if dur == -1:
            break
        if dur < 0:
            print("Invalid input for extension time!")
            continue
        tdur += dur

    if day in [6, 7]:
        rate = 0.15
    else:
        if 8 <= hour <= 18:
            rate = 0.4
        else:
            rate = 0.25

    cost = tdur * rate
    print(f"Your total cost is: ${cost:.2f}")

    return 0


if __name__ == "__main__":
    main()
