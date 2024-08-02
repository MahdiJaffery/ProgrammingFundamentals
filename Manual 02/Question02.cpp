#include <iostream>
using namespace std;

int main()
{
    char op;
    cout << "Enter the operation you want to perform (+, -, *, /, %): ";
    cin >> op;

    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    switch (op)
    {
    case '+':
    {
        int rslt = num1 + num2;
        cout << "The result is: " << rslt;
        break;
    }
    case '-':
    {
        int rslt = num1 - num2;
        cout << "The result is: " << rslt;
        break;
    }
    case '*':
    {
        int rslt = num1 * num2;
        cout << "The result is: " << rslt;
        break;
    }
    case '/':
    {
        if (num2 != 0)
        {
            int rslt = num1 / num2;
            cout << "The result is: " << rslt;
        }
        else
        {
            cout << "Error: Division by zero is not allowed.";
        }
        break;
    }
    case '%':
    {
        if (num2 != 0)
        {
            int rslt = num1 % num2;
            cout << "The result is: " << rslt;
        }
        else
        {
            cout << "Error: Division by zero is not allowed.";
        }
        break;
    }
    default:
        cout << "Invalid operation!";
    }

    return 0;
}
