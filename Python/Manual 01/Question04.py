a = int(input("Person A, Enter your age: "))
b = int(input("Person B, Enter your age: "))
c = int(input("Person C, Enter your age: "))

if a > b and a > c:
    print("Person A is the oldest and")
elif b > a and b > c:
    print("Person B is the oldest and")
else:
    print("Person C is the oldest and")

if a < b and a < c:
    print("Person A is the youngest")
if b < a and b < c:
    print("Person B is the youngest")
if c < a and c < b:
    print("Person C is the youngest")
