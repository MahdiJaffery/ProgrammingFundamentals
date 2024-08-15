#include <iostream>
using namespace std;

// Function to swap two integers
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

// Function to perform selection sort
void Sort(int a[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
        {
            swap(a[min_idx], a[i]);
        }
    }
}

// Function to print the array
void printArray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int a[100], n;
    cout << "Enter Number of Elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << "th Term: ";
        cin >> a[i];
    }
    Sort(a, n);
    cout << "Sorted Array: \n";
    printArray(a, n);
    return 0;
}
