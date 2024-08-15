#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cout << "Enter the value of nth Term: ";
    cin >> x;

    if (x <= 0)
    {
        cout << "Invalid Input!";
    }
    else
    {
        int i = 1;
        double sum = 0;
        while (i <= x)
        {
            sum = sum + (1 / (pow(i, i)));
            cout << (1 / pow(i, i)) << endl;
            i++;
        }
        cout << "Sum of the series is: " << sum;
    }
}
