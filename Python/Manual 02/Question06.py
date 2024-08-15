sum = 0
while True:
    num = int(input("Enter a Positive Number to Sum or Negative to Exit: "))

    if num < 0:
        break
    sum += num

print("Summation of Numbers: " + str(sum))
