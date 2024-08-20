def convertCase(sen):
    newSentence = ""

    for char in sen:
        if char.islower():
            newSentence += char.upper()
        else:
            newSentence += char
    return newSentence

sentence = str(input("Enter a Sentence: "))

sentence = convertCase(sentence)
print(sentence)
