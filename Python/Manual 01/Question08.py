n = int(input("Enter Size of Data: "))

if n <= 0:
    print("Enter a Positive Number")
else:
    newList = list()
    i = 0
    while i < n:
        newList.append(int(input("Enter Value #" + str(i + 1) + ": ")))
        i += 1

    i = 0
    sum = float(0)
    while i < n:
        sum += newList[i]
        i += 1

    print("Sum of Values: " + str(sum) + "\nAverage of Values: " + str(sum / n))
