def calcInterest(period, rate, balance):
    for i in range(0, period):
        print("-------------------------------------------------------")
        print(f"Current Balance: ${balance}")

        deposit = float(input("Enter Amount Depositted in this Month: $"))
        if deposit < 0:
            print("Invalid Amount")
            return

        withdraw = float(input("Enter Amount Withdrawn in this Month: $"))
        if withdraw < 0:
            print("Invalid Amount")
            return

        balance += deposit - withdraw
        balance += balance * (rate / 1200)
    return balance


def main():
    balance = 500
    print(f"Initial Balance: ${balance}")

    period = int(input("Enter Period in Months: "))
    rateOfInterest = float(input("Enter Annual Interest Rate: "))

    if rateOfInterest > 100 or rateOfInterest < 0:
        print("Invalid Rate of Interest")
        return
    else:
        balance = calcInterest(period, rateOfInterest, balance)

        print(f"Final AMount after {period} Months: ${balance}")
    return


main()
