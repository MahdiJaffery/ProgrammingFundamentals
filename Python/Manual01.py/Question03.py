units = int(input("Enter Amount of Units: "))
units *= 50

if units > 600:
    print("You Qualify for a 30% Discount! Your Total Cost is: $" + str(units * 0.7))
else:
    print("Your Final Cost is: $" + str(units))
