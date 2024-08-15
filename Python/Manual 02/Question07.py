a = 0
b = 1

n = int(input("Enter Number of Terms: "))

for i in range(n + 1):
    if i == 0:
        print(0)
    elif i == 1:
        print(1)
    else:
        c = a + b
        a = b
        b = c
        print(str(c))
        n -= 1
