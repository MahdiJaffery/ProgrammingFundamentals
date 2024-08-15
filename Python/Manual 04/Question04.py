n = int(input("Enter Number of Rows: "))

i = 0
while i < n:
    k = 0
    while k < n - 1 - i:
        print("  ", end="")
        k += 1
    j = 0
    while j <= i:
        print("* ", end="  ")
        j += 1
    print()
    i += 1