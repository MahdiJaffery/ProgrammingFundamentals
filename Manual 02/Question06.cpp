#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Input a number: ";
    cin >> x;
    int sum = 0;
    while (x >= 0)
    {
        sum = sum + x;
        cout << "Input number: ";
        cin >> x;
    }
    cout << "Sum is: " << sum;
}
