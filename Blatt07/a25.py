#!user/bin/python3
#-*- coding:UTF-8-*-

"entfernt die vokale aus einem string s"
def devocalize(s):
    r = ""
    for e in s:
        if e not in "aeiouAEIOU":
            r += e


    return r

s = devocalize("Konsonanten sind cool, Vokale sind schwul!")

print(s)


