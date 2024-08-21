def read_from_file(filename):
    with open(filename, "r") as file:
        content = file.read()
    return content


filename = "data.txt"
content = read_from_file(filename)
print(content)
