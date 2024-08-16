rows = int(input("Enter Row Size: "))
cols = int(input("Enter Col Size: "))

for i in range(0, rows):
    for j in range(0, cols):
        print("* ", end="")
    print()
