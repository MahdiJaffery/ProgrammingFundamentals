#include <iostream>

using namespace std;

// Function to convert a character to uppercase if it's a lowercase letter
char convUpp(char a)
{
    if (a >= 'a' && a <= 'z')
    {
        return a - 32; // Convert to uppercase by subtracting 32
    }
    return a; // Return the character unchanged if it's not a lowercase letter
}

int main()
{
    char sent[1000];
    cout << "Enter Your Sentence: ";
    cin.getline(sent, 1000);

    cout << "\nYou Entered: " << sent;

    // Convert each character in the sentence to uppercase
    for (int i = 0; sent[i] != '\0'; i++)
    {
        sent[i] = convUpp(sent[i]);
    }

    cout << "\n\nConverted Sentence: " << sent << "\n";

    return 0;
}
