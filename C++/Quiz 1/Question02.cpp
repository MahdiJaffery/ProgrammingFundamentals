#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv)
{
    int month, date;
    cout << "Input Month of Birth: ";
    cin >> month;
    if (month < 1 || month > 12)
    {
        cout << "Invalid Month" << endl;
    }
    cout << "Input Date of Birth: ";
    cin >> date;
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (date > 30 || date < 1)
        {
            cout << "Invalid Date" << endl;
        }
    }
    else if (month == 2)
    {
        if (date > 28 || date < 1)
        {
            cout << "Invalid Date" << endl;
        }
    }
    else if (date > 31 || date < 1)
    {
        cout << "Invalid Date" << endl;
    }
    if ((month == 3) && (date >= 21))
    {
        cout << "Your Star sign is: Aries";
    }
    else if (month == 4 && date <= 19)
    {
        cout << "Your Star sign is: Aries";
    }
    if (month == 4 && date >= 20)
    {
        cout << "Your Star sign is: Taurus";
    }
    else if (month == 5 && date <= 20)
    {
        cout << "Your Star sign is: Taurus";
    }
    if (month == 5 && date >= 21)
    {
        cout << "Your Star sign is: Gemini";
    }
    else if (month == 6 && date <= 21)
    {
        cout << "Your Star sign is: Gemini";
    }
    if (month == 6 && date >= 22)
    {
        cout << "Your Star Sign is: Cancer";
    }
    else if (month == 7 && date <= 22)
    {
        cout << "Your Star sign is: Cancer";
    }
    if (month == 7 && date >= 23)
    {
        cout << "Your Star Sign is: Leo";
    }
    else if (month == 8 && date <= 22)
    {
        cout << "Your Star Sign is: Leo";
    }
    if (month == 8 && date >= 23)
    {
        cout << "Your Star Sign is: Virgo";
    }
    else if (month == 9 && date <= 22)
    {
        cout << "Your Star Sign is: Virgo";
    }
    if (month == 9 && date >= 23)
    {
        cout << "Your Star Sign is: Libra";
    }
    else if (month == 10 && date <= 22)
    {
        cout << "Your Star Sign is: Libra";
    }
    if (month == 10 && date >= 23)
    {
        cout << "Your Star Sign is: Scorpio";
    }
    else if (month == 11 && date <= 21)
    {
        cout << "Your Star Sign is: Scorpio";
    }
    if (month == 11 && date >= 22)
    {
        cout << "Your Star Sign is: Sagittarius";
    }
    else if (month == 12 && date <= 21)
    {
        cout << "Your Star Sign is: Sagittarius";
    }
    if (month == 12 && date >= 22)
    {
        cout << "Your Star Sign is: Capricorn";
    }
    else if (month == 1 && date <= 19)
    {
        cout << "Your Star Sign is: Capricorn";
    }
    if (month == 1 && date >= 20)
    {
        cout << "Your Star Sign is: Aquarius";
    }
    else if (month == 2 && date <= 18)
    {
        cout << "Your Star Sign is: Aquarius";
    }
    if (month == 2 && date >= 19)
    {
        cout << "Your Star Sign is: Pisces";
    }
    else if (month == 3 && date <= 20)
    {
        cout << "Your Star Sign is: Pisces";
    }
    return 0;
}
