#include <iostream>
using namespace std;

int main()
{
    float score;
    cout << "Input the score: ";
    cin >> score;

    if (score >= 0 && score <= 4.0)
    {
        if (score <= 0.99)
        {
            cout << "Failed Semester - Registration Suspended" << endl;
        }
        else if (score >= 1.0 && score <= 1.99)
        {
            cout << "On Probation for Next Semester" << endl;
        }
        else if (score >= 2.0 && score <= 2.99)
        {
            cout << "N/A" << endl;
        }
        else if (score >= 3.0 && score <= 3.49)
        {
            cout << "Dean's List for Semester" << endl;
        }
        else if (score >= 3.5 && score <= 4.0)
        {
            cout << "Highest Honors for Semester" << endl;
        }
    }
    else
    {
        cout << "Invalid score. Please enter a score between 0 and 4.0." << endl;
    }

    return 0;
}
