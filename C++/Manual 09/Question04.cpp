#include <iostream>
using namespace std;

struct Division
{
    double firstQuarterSales;
    double secondQuarterSales;
    double thirdQuarterSales;
    double fourthQuarterSales;

    void Input()
    {
        cout << "==================================================================================================\n\n";
        cout << "Enter First Quarter Sales Figure: $";
        cin >> firstQuarterSales;
        cout << "Enter Second Quarter Sales Figure: $";
        cin >> secondQuarterSales;
        cout << "Enter Third Quarter Sales Figure: $";
        cin >> thirdQuarterSales;
        cout << "Enter Fourth Quarter Sales Figure: $";
        cin >> fourthQuarterSales;

        if (firstQuarterSales < 0 || secondQuarterSales < 0 || thirdQuarterSales < 0 || fourthQuarterSales < 0)
        {
            cout << "\n\nInvalid Input(s)!\n\n";
        }
        else
        {
            double totalSales = firstQuarterSales + secondQuarterSales + thirdQuarterSales + fourthQuarterSales;
            double averageSales = totalSales / 4;
            cout << "\n\n==================================================================================================\n\n";
            cout << "Annual Sales: $" << totalSales << endl;
            cout << "Average Quarterly Sales: $" << averageSales << endl;
            cout << "\n\n==================================================================================================\n\n";
        }
    }
};

int main()
{
    Division North, East, West, South;

    cout << "\t\t\t\t\tNorthern Division\n";
    North.Input();

    cout << "\t\t\t\t\tEastern Division\n";
    East.Input();

    cout << "\t\t\t\t\tWestern Division\n";
    West.Input();

    cout << "\t\t\t\t\tSouthern Division\n";
    South.Input();

    return 0;
}
