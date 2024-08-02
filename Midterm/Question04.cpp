#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Height of Triangle: ";
    cin >> n;

    // Generate the triangle
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // Print '*' for the first and last position of each row
            // and for the entire last row
            if (j == 1 || j == i || i == n)
            {
                cout << "* ";
            }
            else
            {
                // Print space for other positions in the hollow part
                cout << "  ";
            }
        }
        cout << endl; // Move to the next line after each row
    }

    system("pause"); // Pause to view the output before closing the console
    return 0;
}
