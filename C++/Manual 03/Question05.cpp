#include <iostream>
using namespace std;

int main()
{
    // Checked Board
    int i, j, k, n, c;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> c;

    i = 1;
    while (i <= n)
    {
        k = 1;
        while (k < 2)
        {
            if (i % 2 != 0)
            {
                cout << " ";
            }
            k++;
        }

        j = 1;
        while (j <= c)
        {
            cout << "-";
            j++;
        }
        cout << endl;
        i++;
    }
}
