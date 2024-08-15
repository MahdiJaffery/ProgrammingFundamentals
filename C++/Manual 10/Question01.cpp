#include <iostream>
using namespace std;

// Function to calculate the sum of array elements starting from a given index,
// considering only elements that are less than or equal to a specified limit
int sumOfN(int a[], int ind, int n, int lim)
{
    int sum = 0;
    for (int i = ind; i < n && a[i] <= lim; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    int a[100], n, ind, lim;
    bool check = false;

    // Input the size of the array
    cout << "Enter Size of Array: ";
    cin >> n;

    // Input array elements
    cout << "\nEnter Array Data\n\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Array[" << i << "]: ";
        cin >> a[i];
    }

    // Input the index and limit
    cout << "\nEnter Index Number: ";
    cin >> ind;
    cout << "Enter Limit Integer: ";
    cin >> lim;

    // Check if the limit exists in the array at or after the given index
    for (int i = ind; i < n; i++)
    {
        if (a[i] == lim)
        {
            check = true;
            break;
        }
    }

    // Output the result based on the check
    if (check)
    {
        cout << "Sum is: " << sumOfN(a, ind, n, lim) << endl;
    }
    else
    {
        cout << lim << " Does Not exist after the Index: " << ind << endl;
    }

    return 0;
}
