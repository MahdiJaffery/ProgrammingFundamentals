def fibonacciSeries(n):
    if n == 0:
        return
    elif n == 1:
        print(0)
    elif n == 2:
        print(1)
    else:
        a = 0
        b = 1
        for i in range(2, n + 2):
            c = a + b
            print(str(a), end=" ")
            a = b
            b = c
        print()


def main():
    n = int(input("Enter Number of Terms: "))
    fibonacciSeries(n)
    fibonacciSeries(10)
    fibonacciSeries(15)
    return


main()
