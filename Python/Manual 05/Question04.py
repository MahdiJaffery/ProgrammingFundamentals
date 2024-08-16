myArray = []

for i in range(1, 11):
    myArray.append(str(input("Enter an Alphabet: ")))

for i in range(1, 11):
    print("ASCII Value for " + myArray[i - 1] + ": " + str(ord(myArray[i - 1])))
