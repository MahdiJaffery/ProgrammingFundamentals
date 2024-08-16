num1 = int(input("Enter Lower Limit: "))
num2 = int(input("Enter Upper Limit: "))

count = 0
for i in range(num1, num2 + 1):
    count = 0
    for j in range(2, i):
        if not (i % j):
            count += 1
    if not count:
        print(str(i) + " is a Prime Number")
