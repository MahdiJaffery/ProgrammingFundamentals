def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr


def sort_even_odd(arr):
    evens = [x for x in arr if x % 2 == 0]
    odds = [x for x in arr if x % 2 != 0]

    evens_sorted = insertion_sort(evens)
    odds_sorted = insertion_sort(odds)

    return evens_sorted, odds_sorted


arr = [12, 11, 13, 5, 6, 7, 8]
evens, odds = sort_even_odd(arr)
print("Sorted evens:", evens)
print("Sorted odds:", odds)
