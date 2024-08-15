#include <iostream>
using namespace std;

int main()
{
    char x;
    cout << "Input an alphabet: ";
    cin >> x;

    // Check if the character is a vowel
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
        x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
    {
        cout << "The character is a vowel!" << endl;
    }
    // Check if the character is a consonant
    else if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
    {
        cout << "The character is not a vowel!" << endl;
    }
    // Handle invalid input
    else
    {
        cout << "Invalid Input!" << endl;
    }

    return 0;
}
