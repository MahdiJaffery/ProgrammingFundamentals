import random

myArray = []

for i in range(0, 10):
    myArray.append(random.randint(0, 101))


def binarySearch(element):
    start = 0
    end = 9

    while start < end:
        middle = (start + end) // 2
        if element == myArray[middle]:
            return middle
        elif element > myArray[middle]:
            start = middle
        else:
            end = middle
    return -1


def main():
    myArray.sort()
    print(f"{myArray}")

    element = int(input("Enter an Element to Find: "))

    if binarySearch(element) > -1:
        print("Element Found")
    else:
        print("Element Not Found")
    return


if __name__ == "__main__":
    main()
