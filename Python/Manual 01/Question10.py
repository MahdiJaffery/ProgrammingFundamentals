symbol = str(input("Enter Arithmetic Function +, -, *, /, %   :"))

if len(symbol) > 1 or not (symbol == "*" or symbol == "/" or symbol == "-" or symbol == "+" or symbol == "%"):
    print("Enter Valid Function")
else:
    num1 = int(input("Enter First Number: "))
    num2 = int(input("Enter Second Number: "))

    if symbol == "+":
        print(str(num1 + num2))
    elif symbol == "-":
        print(str(num1 - num2))
    elif symbol == "*":
        print(str(num1 * num2))
    elif symbol == "/":
        print(str(num1 / num2))
    else:
        print(str(num1 % num2))