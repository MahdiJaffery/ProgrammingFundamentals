#include <iostream>
using namespace std;

int main()
{
    // Question 6
    cout << "Company Sales Calculator" << endl
         << endl;
    double rev;
    int time;
    cout << "Enter Your Daily Revenue from Sales: $";
    cin >> rev;
    cout << "Enter The Time Period: ";
    cin >> time;
    cout << endl
         << endl
         << "Your Total Revenue is: $" << time * rev << endl
         << endl;
    return 0;
}
