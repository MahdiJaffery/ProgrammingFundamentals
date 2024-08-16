hoursByEmployees = list()

for i in range(1, 7):
    hoursByEmployees.append(
        int(input("Enter Number of Hours Worked By Employee #" + str(i) + ": "))
    )

print(hoursByEmployees)
