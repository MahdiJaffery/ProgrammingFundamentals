def main():
    month = int(input("Input Month of Birth: "))
    if month < 1 or month > 12:
        print("Invalid Month")
        return

    date = int(input("Input Date of Birth: "))
    if month in [4, 6, 9, 11]:
        if date > 30 or date < 1:
            print("Invalid Date")
            return
    elif month == 2:
        if date > 28 or date < 1:
            print("Invalid Date")
            return
    elif date > 31 or date < 1:
        print("Invalid Date")
        return

    if (month == 3 and date >= 21) or (month == 4 and date <= 19):
        print("Your Star sign is: Aries")
    elif (month == 4 and date >= 20) or (month == 5 and date <= 20):
        print("Your Star sign is: Taurus")
    elif (month == 5 and date >= 21) or (month == 6 and date <= 21):
        print("Your Star sign is: Gemini")
    elif (month == 6 and date >= 22) or (month == 7 and date <= 22):
        print("Your Star Sign is: Cancer")
    elif (month == 7 and date >= 23) or (month == 8 and date <= 22):
        print("Your Star Sign is: Leo")
    elif (month == 8 and date >= 23) or (month == 9 and date <= 22):
        print("Your Star Sign is: Virgo")
    elif (month == 9 and date >= 23) or (month == 10 and date <= 22):
        print("Your Star Sign is: Libra")
    elif (month == 10 and date >= 23) or (month == 11 and date <= 21):
        print("Your Star Sign is: Scorpio")
    elif (month == 11 and date >= 22) or (month == 12 and date <= 21):
        print("Your Star Sign is: Sagittarius")
    elif (month == 12 and date >= 22) or (month == 1 and date <= 19):
        print("Your Star Sign is: Capricorn")
    elif (month == 1 and date >= 20) or (month == 2 and date <= 18):
        print("Your Star Sign is: Aquarius")
    elif (month == 2 and date >= 19) or (month == 3 and date <= 20):
        print("Your Star Sign is: Pisces")


if __name__ == "__main__":
    main()
