def print_checked_board(n, c):
    i = 1
    while i <= n:
        if i % 2 != 0:
            print(" ", end="")

        j = 1
        while j <= c:
            print("-", end="")
            j += 1
        print()
        i += 1


n = int(input("Enter number of rows: "))
c = int(input("Enter number of columns: "))
print_checked_board(n, c)
