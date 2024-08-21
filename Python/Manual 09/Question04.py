class DivisionSales:
    def __init__(self, name):
        self.name = name
        self.first_quarter = 0.0
        self.second_quarter = 0.0
        self.third_quarter = 0.0
        self.fourth_quarter = 0.0
        self.total_sales = 0.0
        self.average_sales = 0.0

    def calculate_totals(self):
        self.total_sales = (
            self.first_quarter
            + self.second_quarter
            + self.third_quarter
            + self.fourth_quarter
        )
        self.average_sales = self.total_sales / 4.0

    def set_sales(self):
        self.first_quarter = self.get_valid_sales("First Quarter")
        self.second_quarter = self.get_valid_sales("Second Quarter")
        self.third_quarter = self.get_valid_sales("Third Quarter")
        self.fourth_quarter = self.get_valid_sales("Fourth Quarter")
        self.calculate_totals()

    def get_valid_sales(self, quarter):
        while True:
            try:
                sales = float(
                    input(f"Enter {quarter} sales for {self.name} Division: ")
                )
                if sales < 0:
                    raise ValueError("Sales figures cannot be negative.")
                return sales
            except ValueError as e:
                print(e)


def main():
    divisions = []
    for name in ["East", "West", "North", "South"]:
        division = DivisionSales(name)
        division.set_sales()
        divisions.append(division)

    print("\nDivision Sales Summary")
    print("-" * 30)
    for division in divisions:
        print(f"Division: {division.name}")
        print(f"  Total Sales: ${division.total_sales:.2f}")
        print(f"  Average Quarterly Sales: ${division.average_sales:.2f}")
        print()


if __name__ == "__main__":
    main()
