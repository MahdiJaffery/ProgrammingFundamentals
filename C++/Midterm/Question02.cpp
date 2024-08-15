#include <iostream>
using namespace std;

int main()
{
    int day, hour, min, dur, tdur = 0;
    double rate, cost;

    // Input starting time of the call
    cout << "Enter the time of starting your call in 24-hour format" << endl;
    cout << "Enter hour: ";
    cin >> hour;
    cout << "Enter minutes: ";
    cin >> min;

    // Validate input time
    if (hour < 0 || hour > 23 || min < 0 || min > 59)
    {
        cout << "Invalid input for time!" << endl;
        return 1; // Exit program with an error code
    }

    // Input the day of the call
    cout << "Enter the day of your call (1 for Monday, 7 for Sunday): ";
    cin >> day;

    // Validate input day
    if (day < 1 || day > 7)
    {
        cout << "Invalid input for day!" << endl;
        return 1; // Exit program with an error code
    }

    // Input the initial duration of the call
    cout << "Enter the duration of your call in minutes: ";
    cin >> dur;
    if (dur < 0)
    {
        cout << "Invalid input for duration!" << endl;
        return 1; // Exit program with an error code
    }
    tdur += dur;

    // Input additional duration
    cout << "If you have more time extensions, enter the number of minutes. To end input, enter -1." << endl;
    while (true)
    {
        cout << "Enter time extension: ";
        cin >> dur;
        if (dur == -1)
        {
            break;
        }
        if (dur < 0)
        {
            cout << "Invalid input for extension time!" << endl;
            continue; // Skip invalid input
        }
        tdur += dur;
    }

    // Determine rate based on day and time
    switch (day)
    {
    case 6: // Saturday
    case 7: // Sunday
        rate = 0.15;
        break;
    default:
        if (hour >= 8 && hour <= 18)
        {
            rate = 0.4; // Peak hours rate
        }
        else
        {
            rate = 0.25; // Off-peak hours rate
        }
        break;
    }

    // Calculate and display total cost
    cost = tdur * rate;
    cout << "Your total cost is: $" << cost << endl;

    return 0; // Exit program successfully
}
