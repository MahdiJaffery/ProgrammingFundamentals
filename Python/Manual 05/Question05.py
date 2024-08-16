import time

# 1 sec represents 5mins


def check_temperature(temp):
    while temp > 102.5:
        print(f"Temperature is {temp}°C, which is above the threshold.")
        print("Turning down the thermostat...")
        time.sleep(1)

        temp -= 1.0
        print(f"Rechecking temperature: {temp}°C")

    print(f"Temperature is now {temp}°C. Technician does nothing.")


while True:
    temp = float(input("Enter the current temperature in Celsius: "))
    if temp <= 102.5:
        print(f"Temperature is {temp}°C. Technician does nothing.")
    else:
        check_temperature(temp)
        print("Waiting for 15 minutes before the next check...")
        time.sleep(3)
