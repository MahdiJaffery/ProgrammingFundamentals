#include <iostream>
using namespace std;

int main()
{
    double data[3][5]; // Array to store intake data for 3 monkeys over 5 days
    double least = 10000, greatest = -1, sum = 0, avg;

    // Input data for each monkey
    for (int i = 0; i < 3; i++)
    {
        cout << "\n\nFor Monkey#" << i + 1 << "\n\n";
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter Amount for Day " << j + 1 << ": ";
            cin >> data[i][j];
        }
    }

    // Calculate sum, greatest, and least intake
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += data[i][j];
            if (data[i][j] > greatest)
            {
                greatest = data[i][j];
            }
            if (data[i][j] < least)
            {
                least = data[i][j];
            }
        }
    }

    // Calculate average intake
    avg = sum / 15;

    // Output results
    cout << "\n\nGreatest intake: " << greatest
         << "\nLeast Intake: " << least
         << "\nAverage Intake: " << avg << endl;

    return 0;
}
