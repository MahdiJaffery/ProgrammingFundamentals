class Circle:
    def __init__(self, diameter):
        self.diameter = diameter

    def printArea(self):
        radius = self.diameter / 2
        area = 3.14 * (radius**2)
        print(f"Area of the circle: {area}")


def main():
    myCircle = Circle(10)
    myCircle.printArea()


main()
