#include <iostream>
using namespace std;

int main()
{
    // Diamond
    int i, j, k, n;
    cout << "Enter number of rows: ";
    cin >> n;
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
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    i = 1;
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
}
