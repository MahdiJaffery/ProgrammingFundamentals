import random

myArray = []

for i in range(10):
    myArray.append(random.randint(0, 100))


def swap(i, j):
    return j, i


def selectionSort(array):
    n = len(array)
    for i in range(n):
        min_idx = i
        for j in range(i + 1, n):
            if array[j] < array[min_idx]:
                min_idx = j

        if min_idx != i:
            array[i], array[min_idx] = swap(array[i], array[min_idx])


selectionSort(myArray)

print("Sorted array:", myArray)
