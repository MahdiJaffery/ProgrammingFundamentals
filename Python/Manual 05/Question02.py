membershipPrices = [50, 25, 30]

choice = int(
    input(
        "Choose \n1) Standard Membership\n2) Children's Membership\n3) Senior Citizen's Membership\nMembership: "
    )
)

if choice > 3 or choice < 1:
    print("Invalid Choice")
else:
    print("Your Monthly Cost is: $" + str(membershipPrices[choice - 1]))
