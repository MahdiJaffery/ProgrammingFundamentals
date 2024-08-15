#include <iostream>
using namespace std;

int main()
{
    // HourGlass
    int i, j, k, n;
    cout << "Enter Number of Rows: ";
    cin >> n;
    i = 0;
    while (i < n)
    {
        j = n - 1;
        while (j >= n - i)
        {
            cout << " ";
            j--;
        }
        k = 1;
        while (k <= n - i)
        {
            cout << "* ";
            k++;
        }
        cout << endl;
        i++;
    }
    i = 2;
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
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}
