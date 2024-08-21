def get_food_data():
    food_data = []
    for i in range(3):  # 3 monkeys
        week_data = []
        print(f"Enter the food data for monkey {i + 1}:")
        for j in range(5):  # 5 days
            while True:
                food = float(input(f"Day {j + 1}: "))
                if food < 0:
                    print("Invalid input, please enter a non-negative value.")
                else:
                    break
            week_data.append(food)
        food_data.append(week_data)
    return food_data


def report(food_data):
    average_food = sum(sum(week) for week in food_data) / (3 * 5)
    min_food = min(min(week) for week in food_data)
    max_food = max(max(week) for week in food_data)

    print(f"\nAverage food per day by all monkeys: {average_food:.2f}")
    print(
        f"Least amount of food eaten during the week by any one monkey: {min_food:.2f}"
    )
    print(
        f"Greatest amount of food eaten during the week by any one monkey: {max_food:.2f}"
    )


food_data = get_food_data()
report(food_data)
