def calculateGrade(marks, grade):
    if marks > 80:
        grade[0] = "A"
    elif marks > 65:
        grade[0] = "B"
    elif marks > 50:
        grade[0] = "C"
    else:
        grade[0] = "F"


def main():
    while True:
        marks = int(input("Enter the marks (or enter -1 to exit): "))

        if marks == -1:
            break

        grade = [""]  # Using a list to simulate pass-by-reference
        calculateGrade(marks, grade)
        print("The grade is:", grade[0])


if __name__ == "__main__":
    main()
