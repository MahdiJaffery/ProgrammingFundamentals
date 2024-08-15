def print_hollow_diamond(n, x):
    i = 1
    while i <= n:
        k = 1
        while k <= n - i:
            print(" ", end="")
            k += 1
        j = 1
        while j <= i:
            if j == 1 or j == i:
                print(x, end=" ")
            else:
                print(" ", end=" ")
            j += 1
        print()
        i += 1

    i = 1
    while i <= n:
        k = n
        while k > n - i:
            print(" ", end="")
            k -= 1
        j = 1
        while j <= n - i:
            if j == 1 or j == (n - i):
                print(x, end=" ")
            else:
                print(" ", end=" ")
            j += 1
        print()
        i += 1


n = int(input("Enter number of rows: "))
x = input("Enter the symbol to print with: ")
print_hollow_diamond(n, x)
