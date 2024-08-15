def print_hourglass(n):
    i = 0
    while i < n:
        j = n - 1
        while j >= n - i:
            print(" ", end="")
            j -= 1

        k = 1
        while k <= n - i:
            print("* ", end="")
            k += 1
        print()
        i += 1

    i = 2
    while i <= n:
        k = 1
        while k <= n - i:
            print(" ", end="")
            k += 1

        j = 1
        while j <= i:
            print("* ", end="")
            j += 1
        print()
        i += 1


n = int(input("Enter Number of Rows: "))
print_hourglass(n)
