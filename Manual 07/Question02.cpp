#include <iostream>
using namespace std;

// Function to calculate grade based on marks
void calculateGrade(int marks, char &grade)
{
    if (marks > 80)
    {
        grade = 'A';
    }
    else if (marks > 65)
    {
        grade = 'B';
    }
    else if (marks > 50)
    {
        grade = 'C';
    }
    else
    {
        grade = 'F';
    }
}

int main()
{
    int marks;
    char grade;

    while (true)
    {
        cout << "Enter marks out of 100 (or -1 to exit): ";
        cin >> marks;

        if (marks == -1)
        {
            break;
        }

        calculateGrade(marks, grade);
        cout << "The grade is: " << grade << endl;
    }

    return 0;
}
