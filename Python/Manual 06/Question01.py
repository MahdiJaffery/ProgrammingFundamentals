def palindrome_check(value):
    if type(value) != int:
        print("Invalid Input")
        return False
    else:
        original_value = value
        reversed_value = 0

        while value > 0:
            remainder = value % 10
            reversed_value = (reversed_value * 10) + remainder
            value = value // 10

    return original_value == reversed_value


print(palindrome_check(10101))
print(palindrome_check(12321))
print(palindrome_check(12345))
