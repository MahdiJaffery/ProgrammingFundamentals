#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Create and open a file named "Lab_Manual_12.txt" for writing
    fstream Doc;
    Doc.open("Lab_Manual_12.txt", ios::out);

    // Check if the file was created successfully
    if (Doc.is_open())
    {
        cout << "File Created Successfully!" << endl;
        cout << "Enter Data/Text to write into the file: ";

        char data[100];
        cin.getline(data, 100);

        // Write data to the file
        Doc << data;

        // Close the file
        Doc.close();
    }
    else
    {
        cout << "Error Occurred While Creating The File!" << endl;
    }

    return 0;
}
