#include <iostream>
using namespace std;

int main()
{
    int a[50], n, temp;
    cout << "Enter Number of Elements: ";
    cin >> n;

    // Input elements
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << "th Element: ";
        cin >> a[i];
    }

    cout << "Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;

    // Sort the array
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    cout << endl
         << "Sorted Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;

    // Print unique elements
    cout << "Unique Elements: ";
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || a[i] != a[i - 1])
        {
            cout << a[i] << "  ";
        }
    }
    cout << endl;

    return 0;
}
