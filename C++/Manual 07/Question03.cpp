#include <iostream>
using namespace std;

// Function to print the first N Fibonacci numbers
void fibonacciSeries(int n)
{
    int a = 0, b = 1, c;

    if (n <= 0)
    {
        cout << "Number of terms should be greater than 0." << endl;
        return;
    }

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

int main()
{
    int n;

    // Driver program for N = 10
    n = 10;
    cout << "For N = " << n << ": ";
    fibonacciSeries(n);

    // Driver program for N = 15
    n = 15;
    cout << "For N = " << n << ": ";
    fibonacciSeries(n);

    return 0;
}
