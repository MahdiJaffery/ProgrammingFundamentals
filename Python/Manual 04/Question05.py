n = int(input("Enter the number of rows: "))

for i in range(n - 2, n + 1):
    for k in range(1, n - i + 1):
        print(" ", end="")

    for j in range(1, n + 1):
        if j <= i:
            print("* ", end="")
        else:
            print("  ", end="")

    for k in range(i + 1, n + 1):
        print("  ", end="")

    for j in range(1, i + 1):
        print("* ", end="")

    print()

for i in range(1, 2 * n + 1):
    for k in range(1, i + 1):
        print(" ", end="")

    for j in range(1, 2 * n - i + 1):
        print("*", end="")

    for j in range(1, 2 * n - i + 1):
        print("*", end="")

    print()
