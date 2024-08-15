#include <iostream>
using namespace std;

// Function to insert an element at a specified index
void funcInsert(int a[], int &n)
{
    int x, num;
    n++; // Increase the size of the array
    cout << "Enter Index to Enter the Number: ";
    cin >> x;

    if (x >= n)
    {
        cout << "Invalid Input!\n";
    }
    else
    {
        cout << "Enter Number to Insert: ";
        cin >> num;
        // Shift elements to the right to make space for the new element
        for (int i = n - 1; i > x; i--)
        {
            a[i] = a[i - 1];
        }
        a[x] = num;
    }
}

// Function to search for an element in the array
void funcSearch(int a[], int n)
{
    int s;
    cout << "Enter an Element to Search for: ";
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == s)
        {
            cout << s << " is Present at Index " << i << endl;
            return;
        }
    }
    cout << s << " is Not Present in the Array" << endl;
}

// Function to delete an element at a specified index
void funcDelete(int a[], int &n)
{
    int del;
    cout << "Enter an Index to Delete: ";
    cin >> del;
    if (del >= n || del < 0)
    {
        cout << "Invalid Index!\n";
    }
    else
    {
        // Shift elements to the left to fill the gap created by deletion
        for (int i = del; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n--; // Decrease the size of the array
    }
}

// Function to print the array
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;
}

int main()
{
    int a[100], n, z;
    cout << "Enter Number of Elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << "th Element: ";
        cin >> a[i];
    }
    cout << "\n\nYour Array: ";
    printArray(a, n);

    cout << "\n\nFor Inserting an Element, Press (1)\nFor Searching an Element, Press (2)\nFor Deleting an Element, Press (3)\n";
    cin >> z;

    switch (z)
    {
    case 1:
        funcInsert(a, n);
        printArray(a, n);
        break;
    case 2:
        funcSearch(a, n);
        break;
    case 3:
        funcDelete(a, n);
        printArray(a, n);
        break;
    default:
        cout << "Invalid Input!" << endl;
        break;
    }

    return 0;
}
