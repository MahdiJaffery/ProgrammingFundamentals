weight = float(input("Enter your Weight in pounds: "))
height = float(input("Enter your Height in inches: "))

bmi = (weight * 703) / (height * height)

if bmi >= 18.5 and bmi <= 25:
    print("Your BMI is Normal")
elif bmi < 18.5:
    print("You are Underweight")
else:
    print("You are Overweight")
