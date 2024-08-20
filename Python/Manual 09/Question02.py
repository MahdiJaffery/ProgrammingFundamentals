sentence = str(input("Enter a Sentence: "))
searchString = str(input("Enter a String: "))

found = 0
for i in range(len(sentence)):
    curLen = 0
    for j in range(i, len(sentence)):
        if curLen < len(searchString) and sentence[j] == searchString[curLen]:
            curLen += 1
            if curLen == len(searchString):
                found = 1
                break
        else:
            break
    if found:
        break

if found:
    print(f'"{searchString}" was present in the sentence.')
else:
    print(f'"{searchString}" was not present in the sentence.')
