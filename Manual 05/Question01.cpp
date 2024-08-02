#include <iostream>
using namespace std;

int main()
{
    int hour[6];
    cout << "Enter Number of Worked Hours" << endl
         << endl;
    for (int i = 0; i <= 5; i++)
    {
        cout << "Enter Hours for Employee #" << i + 1 << ": ";
        cin >> hour[i];
    }
    return 0;
}
