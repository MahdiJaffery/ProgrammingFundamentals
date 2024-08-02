#include <iostream>
using namespace std;

int main()
{
    const int price_per_unit = 50;
    int amount, total_cost;
    float final_cost;

    // Input amount of units purchased
    cout << "Price per unit: " << price_per_unit << endl;
    cout << "Enter the amount of units purchased: ";
    cin >> amount;

    // Calculate total cost
    total_cost = price_per_unit * amount;

    // Apply discount if applicable
    if (total_cost > 600)
    {
        final_cost = total_cost * 0.7;
        cout << "You are eligible for a 30% discount" << endl;
        cout << "Your total cost is: " << final_cost << endl;
    }
    else
    {
        final_cost = total_cost;
        cout << "Your total cost is: " << final_cost << endl;
    }

    return 0;
}
