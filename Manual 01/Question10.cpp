#include <iostream>
using namespace std;

int main()
{
    int x, y, result;
    char op;

    cout << "Enter the 1st number: ";
    cin >> x;
    cout << "Enter the operation required (+, -, *, /, %): ";
    cin >> op;
    cout << "Enter the 2nd number: ";
    cin >> y;

    if (op == '+')
    {
        result = x + y;
        cout << "The result is: " << result << endl;
    }
    else if (op == '-')
    {
        result = x - y;
        cout << "The result is: " << result << endl;
    }
    else if (op == '*')
    {
        result = x * y;
        cout << "The result is: " << result << endl;
    }
    else if (op == '/')
    {
        if (y != 0)
        {
            result = x / y;
            cout << "The result is: " << result << endl;
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }
    else if (op == '%')
    {
        if (y != 0)
        {
            result = x % y;
            cout << "The result is: " << result << endl;
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }
    else
    {
        cout << "Error: Invalid operation." << endl;
    }

    return 0;
}
