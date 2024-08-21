def write_to_file(filename, data):
    with open(filename, "w") as file:
        file.write(data)


def append_to_file(filename, data):
    with open(filename, "a") as file:
        file.write(data)


filename = "data.txt"
data_to_write = "This is the first line.\n"
data_to_append = "This is an appended line.\n"

write_to_file(filename, data_to_write)
append_to_file(filename, data_to_append)
