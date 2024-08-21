def main():
    n = int(input("Enter Height of Triangle: "))

    for i in range(1, n + 1):
        for j in range(1, i + 1):
            if j == 1 or j == i or i == n:
                print("* ", end="")
            else:
                print("  ", end="")
        print()


if __name__ == "__main__":
    main()
