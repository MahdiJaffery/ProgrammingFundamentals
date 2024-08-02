#include <iostream>
using namespace std;

int main()
{
    char shapeType;
    float area, side, radius;

    // Input the shape type
    cout << "Type 'S' if the shape is a square" << endl;
    cout << "Type 'C' if it is a circle: ";
    cin >> shapeType;

    // Calculate area based on shape type
    if (shapeType == 'S' || shapeType == 's')
    {
        cout << "Enter the length of the side: ";
        cin >> side;
        area = side * side;
        cout << "The area of the square is: " << area << endl;
    }
    else if (shapeType == 'C' || shapeType == 'c')
    {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        area = 3.1415 * radius * radius;
        cout << "The area of the circle is: " << area << endl;
    }
    else
    {
        cout << "Invalid input. Please enter 'S' for square or 'C' for circle." << endl;
    }

    return 0;
}
