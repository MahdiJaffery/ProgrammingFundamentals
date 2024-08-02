#include <iostream>
using namespace std;

int main()
{
    int age1, age2, age3;

    // Input ages of three people
    cout << "Enter the age of 1st person: ";
    cin >> age1;
    cout << "Enter the age of 2nd person: ";
    cin >> age2;
    cout << "Enter the age of 3rd person: ";
    cin >> age3;

    // Determine the oldest person
    if (age1 > age2 && age1 > age3)
    {
        cout << "Person 1 is the oldest." << endl;
    }
    else if (age2 > age1 && age2 > age3)
    {
        cout << "Person 2 is the oldest." << endl;
    }
    else if (age3 > age1 && age3 > age2)
    {
        cout << "Person 3 is the oldest." << endl;
    }

    // Determine the youngest person
    if (age1 < age2 && age1 < age3)
    {
        cout << "Person 1 is the youngest." << endl;
    }
    else if (age2 < age1 && age2 < age3)
    {
        cout << "Person 2 is the youngest." << endl;
    }
    else if (age3 < age1 && age3 < age2)
    {
        cout << "Person 3 is the youngest." << endl;
    }

    return 0;
}
