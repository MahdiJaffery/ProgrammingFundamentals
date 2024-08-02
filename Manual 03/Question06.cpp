#include <iostream>
using namespace std;

int main()
{
    // Joined Pyramid
    int x = 1, y, n = 5;
    while (x <= n)
    {
        y = 1;
        while (y < x)
        {
            cout << " ";
            y++;
        }
        y = 1;
        while (y < 2 * (n - x + 1))
        {
            cout << y;
            y++;
        }
        y = 2;
        while (y < 2 * x)
        {
            cout << " ";
            y++;
        }
        y = 1;
        while (y < 2 * (n - x + 1))
        {
            cout << y;
            y++;
        }
        cout << endl;
        x++;
    }
}
