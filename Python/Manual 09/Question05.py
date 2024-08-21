class MonthlyBudget:
    def __init__(self):
        self.housing = 500.0
        self.utilities = 150.0
        self.household_expenses = 65.0
        self.transportation = 50.0
        self.food = 250.0
        self.medical = 30.0
        self.insurance = 100.0
        self.entertainment = 150.0
        self.clothing = 75.0
        self.miscellaneous = 50.0

    def get_expenses(self):
        self.housing = self.get_expense_input("Housing", self.housing)
        self.utilities = self.get_expense_input("Utilities", self.utilities)
        self.household_expenses = self.get_expense_input(
            "Household Expenses", self.household_expenses
        )
        self.transportation = self.get_expense_input(
            "Transportation", self.transportation
        )
        self.food = self.get_expense_input("Food", self.food)
        self.medical = self.get_expense_input("Medical", self.medical)
        self.insurance = self.get_expense_input("Insurance", self.insurance)
        self.entertainment = self.get_expense_input("Entertainment", self.entertainment)
        self.clothing = self.get_expense_input("Clothing", self.clothing)
        self.miscellaneous = self.get_expense_input("Miscellaneous", self.miscellaneous)

    def get_expense_input(self, category, budgeted_amount):
        while True:
            try:
                expense = float(input(f"Enter the amount spent for {category}: "))
                if expense < 0:
                    raise ValueError("Expense cannot be negative.")
                return expense
            except ValueError as e:
                print(e)


def display_report(budget, actual_expenses):
    print("\nMonthly Budget Report")
    print("-" * 30)
    categories = vars(budget).keys()
    for category in categories:
        budgeted_amount = getattr(budget, category)
        actual_amount = getattr(actual_expenses, category)
        difference = actual_amount - budgeted_amount
        status = "over" if difference > 0 else "under"
        print(
            f"{category.capitalize()}: Spent ${actual_amount:.2f}, Budgeted ${budgeted_amount:.2f} ({status} by ${abs(difference):.2f})"
        )


def main():
    budget = MonthlyBudget()
    actual_expenses = MonthlyBudget()
    actual_expenses.get_expenses()
    display_report(budget, actual_expenses)


if __name__ == "__main__":
    main()
