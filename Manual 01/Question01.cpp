#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;

    // Input values for a, b, c, d, e
    cout << "Input the value of a: ";
    cin >> a;
    cout << "Input the value of b: ";
    cin >> b;
    cout << "Input the value of c: ";
    cin >> c;
    cout << "Input the value of d: ";
    cin >> d;
    cout << "Input the value of e: ";
    cin >> e;

    // Determine the largest integer
    if (a > b && a > c && a > d && a > e)
    {
        cout << "a is the largest integer" << endl;
    }
    else if (b > a && b > c && b > d && b > e)
    {
        cout << "b is the largest integer" << endl;
    }
    else if (c > a && c > b && c > d && c > e)
    {
        cout << "c is the largest integer" << endl;
    }
    else if (d > a && d > b && d > c && d > e)
    {
        cout << "d is the largest integer" << endl;
    }
    else if (e > a && e > b && e > c && e > d)
    {
        cout << "e is the largest integer" << endl;
    }

    // Determine the smallest integer
    if (a < b && a < c && a < d && a < e)
    {
        cout << "a is the smallest integer" << endl;
    }
    else if (b < a && b < c && b < d && b < e)
    {
        cout << "b is the smallest integer" << endl;
    }
    else if (c < a && c < b && c < d && c < e)
    {
        cout << "c is the smallest integer" << endl;
    }
    else if (d < a && d < b && d < c && d < e)
    {
        cout << "d is the smallest integer" << endl;
    }
    else if (e < a && e < b && e < c && e < d)
    {
        cout << "e is the smallest integer" << endl;
    }

    return 0;
}
