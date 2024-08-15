#include <iostream>
using namespace std;

int main()
{
    char ch;

    // Input character
    cout << "Enter your character: ";
    cin >> ch;
    cout << endl;

    // Check if the character is a lowercase vowel
    if (ch >= 'a' && ch <= 'z')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cout << "The character entered is a vowel." << endl;
        }
        else
        {
            cout << "The character entered is not a vowel." << endl;
        }
    }
    else
    {
        cout << "Invalid input." << endl;
    }

    return 0;
}
