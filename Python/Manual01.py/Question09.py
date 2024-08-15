gpa = float(input("Enter your GPA: "))

if gpa < 0.0 or gpa > 4.0:
    print("Enter a Valid GPA")
elif gpa <= 0.99:
    print("Failed Semester")
elif gpa <= 1.99:
    print("On Probation for next Semseter")
elif gpa <= 2.99:
    print("No Comments")
elif gpa <= 3.49:
    print("Dean's List for Semester")
elif gpa <= 4.0:
    print("Highest Honors for Semester")
