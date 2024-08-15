number = int(input("Enter a Number: "))

if number < 0:
    print("Enter a Positive Number")
else:
    if number <= 10:
        print("Number is between 0 and 10")
    elif number <= 20:
        print("Number is between 11 and 20")
    elif number <= 30:
        print("Number is between 21 and 30")
    elif number <= 40:
        print("Number is between 31 and 40")
    elif number <= 50:
        print("Number is between 41 and 50")
    else:
        print("Number is greater than 50")

    if number % 2 == 0:
        print("Number is Even")
    else:
        print("Number is Odd")
