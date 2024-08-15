#include <iostream>
using namespace std;

int main()
{
    // Question 3
    int i, j;
    cout << "Enter Any Number: ";
    cin >> i;
    j = i % 2;
    if (i < 0)
    {
        i = -1 * i;
    }
    switch (i)
    {
    case 0:
        cout << "You Have Entered Zero(0)" << endl
             << endl;
        break;
    default:
        switch (j)
        {
        case 0:
            cout << "You Have Entered an Even Non-Zero Digit" << endl
                 << endl;
            break;
        case 1:
            cout << "You Have Entered an Odd Non-Zero Digit" << endl
                 << endl;
            break;
        }
        break;
    }
    return 0;
}
