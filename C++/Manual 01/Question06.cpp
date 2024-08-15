#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Input a number: ";
    cin >> x;
    cout << endl;

    // Check if the number is non-negative
    if (x >= 0)
    {
        // Determine the range and whether the number is odd or even
        if (x <= 50)
        {
            if (x % 2 == 1)
            {
                cout << "The input is odd" << endl;
            }
            else
            {
                cout << "The input is even" << endl;
            }
        }
        else
        {
            // For numbers greater than 50
            if (x % 2 == 1)
            {
                cout << "The input is odd" << endl;
            }
            else
            {
                cout << "The input is even" << endl;
            }
        }
    }
    else
    {
        cout << "Invalid input. Please enter a non-negative number." << endl;
    }

    return 0;
}
