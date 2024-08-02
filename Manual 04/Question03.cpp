#include <iostream>
using namespace std;

int main()
{
    int i = 1, j = 1, z = 3;
    do
    {
        if (j == 4)
        {
            j = 1;
        }
        if (i <= 3)
        {
            cout << "1 ";
        }
        else if (i <= 6 && i >= 4)
        {
            cout << "2 ";
        }
        else if (i >= 7 && i <= 9)
        {
            cout << "3 ";
        }
        do
        {
            cout << j;
            z++;
        } while (z <= 3);
        i++;
        j++;
        cout << endl;
    } while (i <= 9);
}
