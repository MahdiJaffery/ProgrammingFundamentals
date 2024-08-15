#include <iostream>
using namespace std;

// Function to enter array elements
void enterArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << "th Element: ";
        cin >> a[i];
    }
}

// Function to sort the array in ascending order
void SortAsc(int a[], int n)
{
    int save, j;
    for (int i = 1; i < n; i++)
    {
        save = a[i];
        for (j = i - 1; j >= 0 && a[j] > save; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = save;
    }
}

// Function to sort the array in descending order
void SortDes(int a[], int n)
{
    int save, j;
    for (int i = 1; i < n; i++)
    {
        save = a[i];
        for (j = i - 1; j >= 0 && a[j] < save; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = save;
    }
}

// Function to print the array
void printArray(int a[], int n)
{
    cout << "\nArray: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;
}

int main()
{
    int a[100], n, ea[100], oa[100], e = 0, o = 0;

    cout << "Enter Number of Elements: ";
    cin >> n;

    enterArray(a, n);

    // Separating even and odd indexed elements
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            ea[e] = a[i];
            e++;
        }
        else
        {
            oa[o] = a[i];
            o++;
        }
    }

    // Display the entered array
    cout << "Entered Array: ";
    printArray(a, n);

    // Sorting even indexed elements in ascending order
    // Sorting odd indexed elements in descending order
    SortAsc(ea, e);
    SortDes(oa, o);

    // Merging sorted arrays back to original array
    e = 0;
    o = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            a[i] = ea[e];
            e++;
        }
        else
        {
            a[i] = oa[o];
            o++;
        }
    }

    // Display the sorted array
    cout << "\n\nSorted Array\n";
    printArray(a, n);

    return 0;
}
