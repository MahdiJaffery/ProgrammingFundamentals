def main():
    arr = []
    n = int(input("Enter the number of values (at least 3): "))

    if n < 3:
        print("A sequence must have at least 3 values.")
        return 1

    for i in range(n):
        value = int(input(f"Enter value {i + 1}: "))
        arr.append(value)

    isZigZag = False
    isZagZig = False

    for i in range(n - 2):
        if arr[i] > arr[i + 1] and arr[i + 1] < arr[i + 2]:
            isZigZag = True
        elif arr[i] < arr[i + 1] and arr[i + 1] > arr[i + 2]:
            isZagZig = True

    if isZigZag and isZagZig:
        print("The sequence is both Zig-Zag and Zag-Zig.")
    elif isZigZag:
        print("The sequence is Zig-Zag.")
    elif isZagZig:
        print("The sequence is Zag-Zig.")
    else:
        print("The sequence is neither Zig-Zag nor Zag-Zig.")

    return 0


if __name__ == "__main__":
    main()
