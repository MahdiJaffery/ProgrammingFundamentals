#include <iostream>
using namespace std;

int main()
{
    // Question 5
    double temp = 0;
    int time = 0;
    cout << "Enter The Temperature for the Time Elapsed in Minutes" << endl;
    cout << "To End Program, Enter Temp as -1" << endl
         << endl;
    for (int i = 1; temp != -1; i++)
    {
        time += 15;
        cout << "Enter the Temperature. Time Elapsed: " << time << " Minutes." << endl;
        cout << "Temperature(C): ";
        cin >> temp;
    tempcheck:
        if (temp > 102.5)
        {
            cout << "Temperature has risen above Critical Limit! Let it Cool for 5 Minutes and Enter The Temperature Again!" << endl
                 << endl;
            time += 5;
            cout << "Time Elapsed: " << time << " Minutes. Enter the Temperature." << endl;
            cout << "Temperature: ";
            cin >> temp;
            goto tempcheck;
        }
    }
    return 0;
}
