#include <iostream>
using namespace std;

// Function to print all prime numbers between two boundaries
void Prime(int x, int y)
{
    for (int i = x; i <= y; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << i << "  ";
        }
    }
    cout << endl;
}

int main()
{
    int lb, hb;
    cout << "Enter Lower Boundary: ";
    cin >> lb;
    cout << "Enter Upper Boundary: ";
    cin >> hb;
    Prime(lb, hb);
    return 0;
}
