#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Height of Triangle: "; // Input for triangle height
    cin >> n;

    // Check for valid input
    if (n < 0)
    {
        cout << "Invalid Input!" << endl;
        return 1; // Exit program with error code
    }

    // First Triangle
    cout << "\nFirst Triangle:" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Second Triangle
    cout << "\nSecond Triangle:" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Third Triangle
    cout << "\nThird Triangle:" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << " "; // Print spaces for alignment
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Fourth Triangle
    cout << "\nFourth Triangle:" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i + 1; k++)
        {
            cout << " "; // Print spaces for alignment
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0; // Exit program successfully
}
