def twoSum(arr, target):
    start = 0
    end = len(arr) - 1

    while start < end:
        if target > arr[start] + arr[end]:
            start += 1
        elif target < arr[start] + arr[end]:
            end -= 1
        else:
            return start, end


def main():
    myArr = [2, 7, 11, 15]

    print(f"{twoSum(myArr, 18)}")
    return


main()
