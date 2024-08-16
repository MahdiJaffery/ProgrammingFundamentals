n = int(input("Enter A Number: "))

if n == 0:
    print("Zero, Even")
else:
    print("Non-Zero, ", end="")
    if n % 2:
        print("Odd")
    else:
        print("Even")
