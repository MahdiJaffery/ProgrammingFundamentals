def showIntro():
    print("This Program converts cups to fluid Ounces")


def getCups():
    cups = float(input("Enter Number of Cups: "))
    return cups


def isValid(cups):
    return cups >= 0


def cupsToOunces(cups):
    return cups * 8


def main():
    showIntro()
    cups = getCups()

    if not isValid(cups):
        return

    ounces = cupsToOunces(cups)

    print(f"{cups} Cups are {ounces} Fluid Ounces")

main()
