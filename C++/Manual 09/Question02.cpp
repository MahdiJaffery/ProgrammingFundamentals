#include <iostream>
#include <cstring> 

using namespace std;

int Search(const char a[], const char suba[])
{
    int count = 0;
    int lenSuba = strlen(suba);
    int lenA = strlen(a);

    for (int i = 0; i <= lenA - lenSuba; i++)
    {
        bool match = true;
        for (int j = 0; j < lenSuba; j++)
        {
            if (a[i + j] != suba[j])
            {
                match = false;
                break;
            }
        }
        if (match)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char a[100];
    char suba[20];

    cout << "Enter Your Paragraph/Sentence: ";
    cin.getline(a, 100);

    cout << "Enter a Word to Count: ";
    cin.getline(suba, 20);

    cout << "The Word \"" << suba << "\" Occurs " << Search(a, suba) << " times." << endl;

    return 0;
}
