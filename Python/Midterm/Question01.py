def main():
    n = int(input("Enter Height of Triangle: "))

    if n < 0:
        print("Invalid Input!")
        return 1

    print("\nFirst Triangle:")
    for i in range(1, n + 1):
        for j in range(1, i + 1):
            print("* ", end="")
        print()

    # Second Triangle
    print("\nSecond Triangle:")
    for i in range(1, n + 1):
        for j in range(1, n - i + 2):
            print("* ", end="")
        print()

    # Third Triangle
    print("\nThird Triangle:")
    for i in range(1, n + 1):
        for k in range(1, i + 1):
            print(" ", end="")
        for j in range(1, n - i + 2):
            print("*", end="")
        print()

    # Fourth Triangle
    print("\nFourth Triangle:")
    for i in range(1, n + 1):
        for k in range(1, n - i + 2):
            print(" ", end="")
        for j in range(1, i + 1):
            print("*", end="")
        print()

    return 0


if __name__ == "__main__":
    main()
