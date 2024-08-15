value = input("Enter an alphabet: ")

if not ((value >= "A" and value <= "Z") or (value >= "a" and value <= "z")) or len(value) > 1:
    print("Invalid Input")
else:
    value = value.lower()

    if value == "a" or value == "e" or value == "i" or value == "o" or value == "u":
        print("Alphabet is a Vowel")
    else:
        print("Alphabet is a Consonant")
