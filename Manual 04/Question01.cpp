#include <iostream>
using namespace std;

int main()
{
    int i, j, n, r, digit;
    cout << "Enter a Number: ";
    cin >> n;

    for (i = 0; i <= 9; i++)
    {
        digit = 0;
        for (j = n; j > 0; j /= 10)
        {
            r = j % 10;
            if (r == i)
            {
                digit++;
            }
        }
        cout << "Frequency of " << i << " is: " << digit << endl;
    }
}
