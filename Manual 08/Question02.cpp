#include <iostream>
using namespace std;

// Function to perform insertion sort
void insertionSort(int arr[], int n)
{
    int i, x, j;
    for (i = 1; i < n; i++)
    {
        x = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
}

// Function to print the array
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100], n;
    cout << "Enter Number of Terms: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << "th Term: ";
        cin >> arr[i];
    }
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}
