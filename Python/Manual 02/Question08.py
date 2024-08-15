year = int(input("Enter Year: "))

if year < 0:
    print("Enter a Valid Year")
else:
    if year % 100 == 0 or year % 4 != 0:
        print("Not a Leap Year")
    elif year % 4 == 0:
        print("Leap Year")
