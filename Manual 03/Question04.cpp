#include <iostream>
using namespace std;

int main()
{
    // Hollow Diamond
    int i, j, k, n;
    char x;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter the symbol to print with: ";
    cin >> x;

    i = 1;
    while (i <= n)
    {
        k = 1;
        while (k <= n - i)
        {
            cout << " ";
            k++;
        }
        j = 1;
        while (j <= i)
        {
            if (j == 1 || j == i)
            {
                cout << x << " ";
            }
            else
            {
                cout << "  ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
    i = 1;
    while (i <= n)
    {
        k = n;
        while (k > n - i)
        {
            cout << " ";
            k--;
        }
        j = 1;
        while (j <= n - i)
        {
            if (j == 1 || j == (n - i))
            {
                cout << x << " ";
            }
            else
            {
                cout << "  ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
}
