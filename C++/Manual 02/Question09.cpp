#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the number of rows: ";
    cin >> x;
    int i = 1;

    if (x <= 0)
    {
        cout << "Invalid Input!";
    }
    else
    {
        while (i <= x)
        {
            int j = 1;
            while (j <= i)
            {
                cout << "*";
                j++;
            }
            cout << endl;
            i++;
        }
    }
}
