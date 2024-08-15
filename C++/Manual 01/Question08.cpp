#include <iostream>
using namespace std;

int main()
{
    float a, b, c, avg;

    // Input three numbers
    cout << "Enter the 1st number: ";
    cin >> a;
    cout << "Enter the 2nd number: ";
    cin >> b;
    cout << "Enter the 3rd number: ";
    cin >> c;

    // Check if all numbers are positive
    if (a > 0 && b > 0 && c > 0)
    {
        avg = (a + b + c) / 3;
        cout << "The average of the numbers is: " << avg << endl;
    }
    else
    {
        cout << "Invalid input. All numbers must be positive." << endl;
    }

    return 0;
}
