#!user/bin/python3
#-*- coding:UTF-8-*-

import sys

def countWords(countText):
    d = {}
    wordlist = text.split( )

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

argc = len(sys.argv)
progname = sys.argv[0]
argumente = sys.argv[1:]

file = open(argumente[0])
text = file.read()

chars = countChars(text)
words = countWords(text)

print(words)
print(chars)

















