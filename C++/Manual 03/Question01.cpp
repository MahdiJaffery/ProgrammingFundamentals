#include <iostream>
using namespace std;

int main()
{
    // Half-Hour-Glass
    int i = 1, j, k, n;
    cout << "Enter number of rows: ";
    cin >> n;

    while (i <= n)
    {
        k = n - i;
        while (k >= 0)
        {
            cout << "* ";
            k--;
        }
        cout << endl;
        i++;
    }
    i = 2;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}
