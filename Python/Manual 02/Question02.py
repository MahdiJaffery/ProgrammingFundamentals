#!/usr/bin/env python3


def case_Add(num1, num2):
    return num1 + num2


def case_Subt(num1, num2):
    return num1 - num2


def case_Mult(num1, num2):
    return num1 * num2


def case_Div(num1, num2):
    return num1 / num2


def case_Default():
    print("Invalid Operation")



symbol = str(input("Enter an Arithmetic Symbol: "))
num1 = float(input("Enter First Number: "))
num2 = float(input("Enter Second Number: "))

case = {"+": case_Add(num1, num2), "-": case_Subt(num1, num2), "*": case_Mult(num1, num2), "/": case_Div(num1, num2)}

if len(symbol) > 1 or not (
    symbol == "+" or symbol == "-" or symbol == "*" or symbol == "/"
):
    print("Enter a Valid Operation")
else:
    print(case.get(symbol, case_Default))
