def calculate_total_sales():
    total_sales = 0
    days = int(input("Enter the number of days: "))

    for day in range(1, days + 1):
        daily_sales = float(input(f"Enter sales for day {day}: $"))
        total_sales += daily_sales
        print(f"Running total after day {day}: ${total_sales:.2f}")

    print(f"\nThe total sales over {days} days is: ${total_sales:.2f}")


calculate_total_sales()
