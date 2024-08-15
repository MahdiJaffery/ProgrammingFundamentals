#include <iostream>
using namespace std;

// Function to check if a number is a palindrome
void checkPalindrome(int x)
{
    if (x < 0)
    {
        cout << "The Number is not a Palindrome" << endl;
        return;
    }

    int original = x, reversed = 0;

    // Reverse the number
    while (x > 0)
    {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    // Check if the reversed number is equal to the original
    if (reversed == original)
    {
        cout << "The Number is a Palindrome" << endl;
    }
    else
    {
        cout << "The Number is not a Palindrome" << endl;
    }
}

int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    checkPalindrome(num);
    return 0;
}
