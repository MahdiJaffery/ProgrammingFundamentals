#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv)
{
    float amount, balance, arate, mrate, fx, interest, isum = 0;
    int i = 1, time, wcount = 0, dcount = 0;

    cout << "Enter annual interest rate: ";
    cin >> arate;
    mrate = arate / 12;
    cout << "Enter your starting balance: ";
    cin >> amount;
    fx = amount;
    cout << "Enter number of months passed since account was established: ";
    cin >> time;

    cout << "Enter amount deposited into the account: ";
    float dep;
    cin >> dep;
    amount = dep + amount;
    float with;

    if (dep < 0)
    {
        cout << "Invalid Input";
    }
    else
    {
        while (i <= time)
        {
            cout << "Enter the amount deposited in this month: ";
            cin >> dep;
            if (dep < 0)
            {
                cout << "Invalid Input";
                break;
            }
            else
            {
                dcount++;
            }
            cout << "Enter the withdrawn amount for this month: ";
            cin >> with;
            if (with < 0)
            {
                cout << "Invalid Input";
                break;
            }
            else
            {
                wcount++;
            }
            amount = amount - with;
            interest = (amount + (amount * mrate));
            isum = isum + interest;
            cout << "Balance remaining for this month is: " << amount << endl;
            cout << "Monthly Interest Amount is: " << interest;
            i++;
        }
        if (i > time)
        {
            cout << "Final Number of deposits in total is: " << dcount << endl
                 << "The number of Withdrawals is: " << wcount << endl;
            cout << "Total Interest earned is: $" << isum;
        }
    }

    return 0;
}
