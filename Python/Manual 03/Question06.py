def print_joined_pyramid(n):
    x = 1
    while x <= n:
        y = 1
        while y < x:
            print(" ", end="")
            y += 1
        y = 1
        while y < 2 * (n - x + 1):
            print(y, end="")
            y += 1
        y = 2
        while y < 2 * x:
            print(" ", end="")
            y += 1
        y = 1
        while y < 2 * (n - x + 1):
            print(y, end="")
            y += 1
        print()
        x += 1


n = 5
print_joined_pyramid(n)
