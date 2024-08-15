#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Input the starting number: ";
    cin >> x;
    cout << "Input the ending number: ";
    cin >> y;

    if (x <= 0 && y <= 0)
    {
        cout << "Invalid Input!";
    }
    else
    {
        int i = 3;
        int numx = x;
        int checkx = 0;
        int j = 5;
        int numy = x;
        int checkj = 0;
        while (numx <= y)
        {
            if (numx % i == 0)
            {
                checkx++;
                numx++;
            }
            else
            {
                numx++;
            }
        }
        while (numy <= y)
        {
            if (numy % j == 0)
            {
                checkj++;
                numy++;
            }
            else
            {
                numy++;
            }
        }
        cout << "The Multiples of 3 are: " << checkx - 1 << endl
             << "The multiples of 5 are: " << checkj - 1 << endl;
    }
}
