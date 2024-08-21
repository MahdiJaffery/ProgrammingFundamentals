def median(arr1, arr2):
    i = 0
    j = 0
    newArr = []
    while i < len(arr1) and j < len(arr2):
        if arr1[i] <= arr2[j]:
            newArr.append(arr1[i])
            i += 1
        else:
            newArr.append(arr2[j])
            j += 1

    while i < len(arr1):
        newArr.append(arr1[i])
        i += 1

    while j < len(arr2):
        newArr.append(arr2[j])
        j += 1

    return newArr[len(newArr) // 2]


def main():
    arr1 = [1, 3]
    arr2 = [2,4,7]

    print(f"Median of {arr1} and {arr2}: {median(arr1, arr2)}")
    return


main()
