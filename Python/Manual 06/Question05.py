n = []

number = 0
while True:
    number = int(input("Enter a Non Negative Number: "))
    if number < 0:
        break
    n.append(number)

sum = 0
max = -1
min = 999999
for num in n:
    if max < num:
        max = num
    if min > num:
        min = num
    sum += num

avg = sum / len(n)

print(
    "Sum: "
    + str(sum)
    + "\nAvg: "
    + str(avg)
    + "\nMax: "
    + str(max)
    + "\nMin: "
    + str(min)
)
