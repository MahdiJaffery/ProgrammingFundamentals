data = []
for i in range(0, 10):
    data.append(int(input("Enter a Number: ")))

myMap = {}

for num in data:
    if num in myMap:
        myMap[num] += 1
    else:
        myMap[num] = 1

for value in myMap:
    if myMap[value] == 1:
        print(str(value))
