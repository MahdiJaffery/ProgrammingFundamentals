def print_diamond(n):
    i = 1
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

    i = 1
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


n = int(input("Enter number of rows: "))
print_diamond(n)
