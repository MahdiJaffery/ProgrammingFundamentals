#include <iostream>

using namespace std;

struct Circle
{
    double radius;
    double diameter;
    double area;
    static constexpr double pi = 3.1415; // Using static constexpr for constant values

    void Input()
    {
        cout << "Enter Diameter: ";
        cin >> diameter;
        radius = diameter / 2;
        area = radius * radius * pi;
        cout << "Radius is: " << radius << " units\n";
        cout << "Area is: " << area << " square units\n";
    }
};

int main()
{
    Circle value;
    value.Input();
    return 0;
}
