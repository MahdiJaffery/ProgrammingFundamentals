#include <iostream>
using namespace std;

// Function to display introductory message
void showIntro()
{
    cout << "This program converts cups to fluid ounces." << endl;
    cout << "1 cup is equivalent to 8 fluid ounces." << endl;
}

// Function to get the number of cups from the user
double getCups()
{
    double cups;
    cout << "Enter the number of cups: ";
    cin >> cups;
    return cups;
}

// Function to check if the input is valid
bool isValid(double cups)
{
    return cups >= 0;
}

// Function to convert cups to fluid ounces
double cupsToOunces(double cups)
{
    return cups * 8;
}

int main()
{
    showIntro();

    double cups = getCups();

    if (isValid(cups))
    {
        double ounces = cupsToOunces(cups);
        cout << cups << " cups is equal to " << ounces << " fluid ounces." << endl;
    }
    else
    {
        cout << "Invalid input. Exiting program." << endl;
    }

    return 0;
}
