def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr


def search(arr, item):
    try:
        index = arr.index(item)
        return index
    except ValueError:
        return -1


def insert(arr, item):
    arr.append(item)
    return insertion_sort(arr)


def delete(arr, item):
    try:
        arr.remove(item)
    except ValueError:
        pass
    return arr


arr = [12, 11, 13, 5, 6]
item_to_search = 13
print("Index of", item_to_search, ":", search(arr, item_to_search))

item_to_insert = 7
arr = insert(arr, item_to_insert)
print("Array after insertion:", arr)

item_to_delete = 11
arr = delete(arr, item_to_delete)
print("Array after deletion:", arr)
