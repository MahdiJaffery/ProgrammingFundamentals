#include <iostream>
using namespace std;

int main()
{
    float weight, height, bmi;

    // Input height in inches and weight in pounds
    cout << "Input your height in inches: ";
    cin >> height;
    cout << "Input your weight in pounds: ";
    cin >> weight;

    // Calculate BMI
    bmi = (weight * 703) / (height * height);

    // Display BMI category
    if (bmi >= 18.5 && bmi <= 25)
    {
        cout << "Your BMI is optimal" << endl;
    }
    else if (bmi < 18.5)
    {
        cout << "You are underweight!" << endl;
    }
    else
    {
        cout << "You are overweight!" << endl;
    }

    return 0;
}
