#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n;
    cin >> n;
    for (i = n - 2; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        for (j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (k = 1; k >= i + 1; k--)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (i = 1; i <= 2 * n; i++)
    {
        for (k = 1; k <= i; k++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * n - i; j++)
        {
            cout << "*";
        }
        for (j = 1; j <= 2 * n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
