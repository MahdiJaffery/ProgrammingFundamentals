n = int(input("Enter n: "))

i = 1
sum = 0
while i <= n:
    sum = sum + (1 / i**i)
    i += 1
    
print(sum)
