#!user/bin/python3
# -*- coding:UTF-8 -*-

import sys



def countWords(countText):
    d = {}
    wordlist = countText.split( )

    for word in wordlist:
        if word.lower() in d:
            d[word.lower()] += 1
        else:
            d.update({word.lower():1})

    return d

def countChars(countText):
    d = {}
    for char in countText:
        if char.lower() in d:
            d[char.lower()] += 1
        else:
            d.update({char.lower():1})
    return d

def takeSecond(elem):
    return elem[1]

def sortDict(dict):
    sortiert = sorted(dict.items(), reverse=True, key=takeSecond)
    return sortiert

argc = len(sys.argv)
progname = sys.argv[0]
argumente = sys.argv[1:]

file = open(argumente[0])
text = file.read()

chars = sortDict(countChars(text))
words = sortDict(countWords(text))


for i in range(50):
    print("Wort: " +  str(words[i][0]) + " Anzahl:" + str(words[i][1]))
    

















