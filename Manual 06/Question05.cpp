#include <iostream>
using namespace std;

// Function to compute and display sum, maximum, minimum, and average of non-negative numbers
void funct(int x)
{
    int max = 0, min = 99999, sum = 0, count = 0;
    float avg;
    while (x >= 0)
    {
        cout << "Enter a Number: ";
        cin >> x;
        if (x >= 0)
        {
            count++;
            if (x > max)
            {
                max = x;
            }
            if (x < min)
            {
                min = x;
            }
            sum += x;
        }
        else
        {
            if (count > 0)
            {
                avg = static_cast<float>(sum) / count;
                cout << "Sum is: " << sum << endl;
                cout << "Maximum Value is: " << max << endl;
                cout << "Minimum Value is: " << min << endl;
                cout << "Average Value is: " << avg << endl;
            }
            else
            {
                cout << "No valid numbers were entered." << endl;
            }
            break;
        }
    }
}

int main()
{
    int a = 0;
    funct(a);
    return 0;
}
