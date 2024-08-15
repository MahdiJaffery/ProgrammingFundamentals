shape = str(input("Enter C for Circle or S for Square: "))
shape = shape.lower()

if not (shape[0] == "c" or shape[0] == "s"):
    print("Enter a valid Value")
elif shape[0] == "s":
    side = float(input("Enter Length of a Side in cm: "))
    side *= side
    print("Area of your square is: " + str(side) + "cm^2")
else:
    radius = float(input("Enter the radius of your Circle in cm: "))
    radius = 2 * 3.14 * (radius**2)
    print("Area of your Circle is: " + str(radius) + "cm^2")
