obtainedMarks = float(input("Enter Obtained Marks: "))
totalMarks = float(input("Enter Total Marks: "))

if totalMarks < obtainedMarks or obtainedMarks < 0 or totalMarks < 0:
    print("Enter Valid Data")
else:
    percentage = obtainedMarks / totalMarks

    if percentage >= 0.90:
        print("Grade A")
    elif percentage >= 0.80:
        print("Grade B")
    elif percentage >= 0.70:
        print("Grade C")
    elif percentage >= 0.60:
        print("Grade D")
    elif percentage >= 0.40:
        print("Grade E")
    else:
        print("Grade F")
