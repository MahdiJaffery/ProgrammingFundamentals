#include <iostream>
using namespace std;

struct MonthlyBudget
{
    double housing, utilities, householdExp, transp, food, medical, insurance, entertainment, clothing, misc, totalExpenses;

    void Input()
    {
        totalExpenses = 0;

        // Define budget limits for each category
        const double housingLimit = 500;
        const double utilitiesLimit = 150;
        const double householdExpLimit = 65;
        const double transpLimit = 50;
        const double foodLimit = 250;
        const double medicalLimit = 30;
        const double insuranceLimit = 100;
        const double entertainmentLimit = 150;
        const double clothingLimit = 75;
        const double miscLimit = 30;
        const double monthlyLimit = 1420;

        // Input and check each expense
        cout << "Enter Housing Expense: ";
        cin >> housing;
        totalExpenses += housing;
        cout << (housing > housingLimit ? "Over-Budget\n" : "Under-Budget\n");

        cout << "Enter Utilities Expense: ";
        cin >> utilities;
        totalExpenses += utilities;
        cout << (utilities > utilitiesLimit ? "Over-Budget\n" : "Under-Budget\n");

        cout << "Enter Household Expense: ";
        cin >> householdExp;
        totalExpenses += householdExp;
        cout << (householdExp > householdExpLimit ? "Over-Budget\n" : "Under-Budget\n");

        cout << "Enter Transport Expense: ";
        cin >> transp;
        totalExpenses += transp;
        cout << (transp > transpLimit ? "Over-Budget\n" : "Under-Budget\n");

        cout << "Enter Food Expense: ";
        cin >> food;
        totalExpenses += food;
        cout << (food > foodLimit ? "Over-Budget\n" : "Under-Budget\n");

        cout << "Enter Medical Expense: ";
        cin >> medical;
        totalExpenses += medical;
        cout << (medical > medicalLimit ? "Over-Budget\n" : "Under-Budget\n");

        cout << "Enter Insurance Expense: ";
        cin >> insurance;
        totalExpenses += insurance;
        cout << (insurance > insuranceLimit ? "Over-Budget\n" : "Under-Budget\n");

        cout << "Enter Entertainment Expense: ";
        cin >> entertainment;
        totalExpenses += entertainment;
        cout << (entertainment > entertainmentLimit ? "Over-Budget\n" : "Under-Budget\n");

        cout << "Enter Clothing Expense: ";
        cin >> clothing;
        totalExpenses += clothing;
        cout << (clothing > clothingLimit ? "Over-Budget\n" : "Under-Budget\n");

        cout << "Enter Miscellaneous Expense: ";
        cin >> misc;
        totalExpenses += misc;
        cout << (misc > miscLimit ? "Over-Budget\n" : "Under-Budget\n");

        // Display total and overall budget status
        cout << "\n\nTotal Monthly Expense: $" << totalExpenses << endl;
        cout << (totalExpenses > monthlyLimit ? "Monthly Expense is Over-Budget\n" : "Monthly Expense is Under-Budget\n");
    }
};

int main()
{
    MonthlyBudget expense;
    expense.Input();
    return 0;
}
