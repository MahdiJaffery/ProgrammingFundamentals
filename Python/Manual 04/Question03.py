tens = int(input("Enter Tens Limit: "))
ones = int(input("Enter Ones Limit: "))

if tens > 9 or tens < 1 or ones > 9 or ones < 0:
    print("Invalid Input")
else:
    i = 1
    while i <= tens:
        j = 0
        while j <= ones:
            print(str(i) + str(j))
            j += 1
        i += 1
