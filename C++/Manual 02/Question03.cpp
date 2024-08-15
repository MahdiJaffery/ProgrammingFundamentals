#include <iostream>
using namespace std;

int main()
{
    int tmarks, gmarks, rslt;
    cout << "Input Gained Marks: ";
    cin >> gmarks;
    cout << "Input Total Marks: ";
    cin >> tmarks;
    rslt = (gmarks * 100) / tmarks;
    cout << "Your Percentage is: " << rslt << "%" << endl;

    switch (rslt >= 90)
    {
    case 1:
        cout << "Your Grade is A!";
        break;
    }
    switch (rslt >= 80 && rslt <= 89)
    {
    case 1:
        cout << "Your Grade is B!";
        break;
    }
    switch (rslt >= 70 && rslt <= 79)
    {
    case 1:
        cout << "Your Grade is C!";
        break;
    }
    switch (rslt >= 60 && rslt <= 69)
    {
    case 1:
        cout << "Your Grade is D!";
        break;
    }
    switch (rslt >= 40 && rslt <= 59)
    {
    case 1:
        cout << "Your Grade is E!";
        break;
    }
    switch (rslt < 40)
    {
    case 1:
        cout << "Your Grade is F!";
        break;
    }

    return 0;
}
