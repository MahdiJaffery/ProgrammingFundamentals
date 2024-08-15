num = int(input("Enter a multi-digit number: "))

Frequency = {i: 0 for i in range(0, 10)}

while num > 0:
    Frequency[num % 10] += 1
    num //= 10

print(Frequency)
