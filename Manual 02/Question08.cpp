#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Input Year: ";
    cin >> x;

    if (x % 4 == 0)
    {
        if (x % 400 == 0)
        {
            cout << "It is not a leap year!";
        }
        else
        {
            cout << "It is a Leap Year!";
        }
    }
    if (x % 4 != 0)
    {
        cout << "It is not a leap Year!";
    }
}
