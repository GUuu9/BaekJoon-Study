while True:
    wordNum = int(input())
    if wordNum == 0:
        break;
    
    wordList = []

    for _ in range(wordNum):
        wordList.append(input())

    wordList.sort(key=lambda x:x.lower()[::])
    print(wordList[0])
