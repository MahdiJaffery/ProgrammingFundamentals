n = int(input("Enter Upper Half Rows: "))

if n < 0:
    print("Invalid Input")
else:
    i = n
    while i > 0:
        print("*" * i)
        i -= 1

    i = 1
    while i <= n:
        print("*" * i)
        i += 1