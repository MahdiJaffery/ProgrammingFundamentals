#include <iostream>
using namespace std;

int main()
{
    // Question 2
    int x, time, price;
    cout << "Enter Your Membership Choice" << endl
         << endl;
    cout << "Press(1) for Standard Adult Membership" << endl;
    cout << "Press(2) for Child Membership" << endl;
    cout << "Press(3) for Senior Citizen Membership" << endl
         << endl;
    cout << "Enter Your Choice: ";
    cin >> x;
    if (x == 1)
    {
        cout << "Price for this Membership is: $40 / Month" << endl;
    }
    else if (x == 2)
    {
        cout << "Price for this Membership is: $30 / Month" << endl;
    }
    else if (x == 3)
    {
        cout << "Price for this Membership is: $20 / Month" << endl;
    }
    else
    {
        cout << "Invalid Input!" << endl
             << endl;
    }
    if (x >= 1 && x <= 3)
    {
        cout << "Enter the Time Period in Months for the Membership: ";
        cin >> time;
        if (x == 1)
        {
            price = time * 40;
        }
        else if (x == 2)
        {
            price = time * 30;
        }
        else if (x == 3)
        {
            price = time * 20;
        }
        cout << "The Total Cost is: $" << price << endl
             << endl;
    }
    return 0;
}
