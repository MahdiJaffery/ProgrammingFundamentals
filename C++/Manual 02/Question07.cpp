#include <iostream>
using namespace std;

int main()
{
    int n, f, f1 = -1, f2 = 1;

    cout << "Enter the Number of Terms: ";
    cin >> n;
    cout << "The Series is as follows: " << endl;
    while (n > 0)
    {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        cout << f << ", ";
        n--;
    }
}
