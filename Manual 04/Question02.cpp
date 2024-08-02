#include <iostream>
using namespace std;

int main()
{
    int i = 1, j = 1, n = 4, x = 4;
    while (i <= n)
    {
        j = 4;
        while (j >= i)
        {
            cout << x << " ";
            j--;
        }
        cout << endl;
        x--;
        i++;
    }
}
