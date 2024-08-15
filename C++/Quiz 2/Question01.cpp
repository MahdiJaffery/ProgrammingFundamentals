#include <iostream>
using namespace std;

// Function to count occurrences of a character in a char array
int countCharacter(const char Text[], int Length, char Character)
{
    int count = 0;
    for (int i = 0; i < Length; i++)
    {
        if (Text[i] == Character)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char Text[] = {'H', 'E', 'L', 'L', 'O'};
    int Length = 5;
    char Character = 'E';

    int occurrences = countCharacter(Text, Length, Character);
    cout << "Occurrences of " << Character << " are: " << occurrences << endl;

    return 0;
}
