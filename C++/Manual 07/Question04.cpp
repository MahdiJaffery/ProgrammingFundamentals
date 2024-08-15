#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(const int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            return mid; // Target found
        }
        else if (arr[mid] < target)
        {
            low = mid + 1; // Search right half
        }
        else
        {
            high = mid - 1; // Search left half
        }
    }

    return -1; // Target not found
}

int main()
{
    int size = 10;
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; // Sorted array

    int target;
    cout << "Enter a number to search: ";
    cin >> target;

    int index = binarySearch(arr, size, target);

    if (index != -1)
    {
        cout << "Number " << target << " found at index " << index << "." << endl;
    }
    else
    {
        cout << "Number " << target << " not found in the array." << endl;
    }

    return 0;
}
