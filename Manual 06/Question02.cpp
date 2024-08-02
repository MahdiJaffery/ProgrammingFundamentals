#include <iostream>
using namespace std;

// Function to draw a rectangle of stars with given dimensions
void drawRectangle(int rows, int cols)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int rows, cols;
    cout << "Enter Number of Rows: ";
    cin >> rows;
    cout << "Enter Number of Columns: ";
    cin >> cols;

    // Check for invalid input
    if (rows < 0 || cols < 0)
    {
        cout << "Rectangle cannot be drawn with negative dimensions!" << endl;
    }
    else
    {
        drawRectangle(rows, cols);
    }

    return 0;
}
