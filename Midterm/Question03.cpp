#include <iostream>
using namespace std;

int main()
{
    int arr[50], n;

    // Input number of values
    cout << "Enter the number of values (at least 3): ";
    cin >> n;

    // Validate the number of values
    if (n < 3)
    {
        cout << "A sequence must have at least 3 values." << endl;
        return 1; // Exit with an error code
    }

    // Input values into the array
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Check if the sequence is Zig-Zag or Zag-Zig
    bool isZigZag = false, isZagZig = false;

    for (int i = 0; i < n - 2; i++)
    {
        if (arr[i] > arr[i + 1] && arr[i + 1] < arr[i + 2])
        {
            isZigZag = true;
        }
        else if (arr[i] < arr[i + 1] && arr[i + 1] > arr[i + 2])
        {
            isZagZig = true;
        }
    }

    // Determine the sequence type
    if (isZigZag && isZagZig)
    {
        cout << "The sequence is both Zig-Zag and Zag-Zig." << endl;
    }
    else if (isZigZag)
    {
        cout << "The sequence is Zig-Zag." << endl;
    }
    else if (isZagZig)
    {
        cout << "The sequence is Zag-Zig." << endl;
    }
    else
    {
        cout << "The sequence is neither Zig-Zag nor Zag-Zig." << endl;
    }

    return 0; // Exit program successfully
}
