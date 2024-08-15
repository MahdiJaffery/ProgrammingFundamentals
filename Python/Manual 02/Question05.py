def swap(a, b):
    return b, a


num1 = int(input("Enter First Number: "))
num2 = int(input("Enter Second Number: "))

if num2 < num1:
    num1, num2 = swap(num1, num2)

count3 = 0
count5 = 0

for i in range(num1, num2 + 1):
    if i % 3 == 0:
        count3 += 1
    if i % 5 == 0:
        count5 += 1

print("Multiples of 3: " + str(count3))
print("Multiples of 5: " + str(count5))
