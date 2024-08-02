#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream Doc;
    Doc.open("Lab Manual 12", ios::in); // Open file in input mode

    if (!Doc)
    { // Check if file was opened successfully
        cout << "File Does Not Exist!" << endl;
    }
    else
    {
        char d;
        while (Doc.get(d))
        {              // Read file character by character
            cout << d; // Print each character
        }
        Doc.close(); // Close the file
    }

    return 0;
}
