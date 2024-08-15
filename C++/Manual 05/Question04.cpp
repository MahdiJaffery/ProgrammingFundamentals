#include <iostream>
using namespace std;

int main()
{
    // Question 4
    char abc[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    for (int i = 0; i <= 9; i++)
    {
        cout << "The ASCII Value for " << abc[i] << " is: " << int(abc[i]) << endl;
    }
    return 0;
}
