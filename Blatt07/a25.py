#!user/bin/python3
#-*- coding:UTF-8-*-

def devocalize(s):
    r = ""
    for e in s:
        if e not in "aeiouAEIOU":
            r += e


    return r

s = devocalize("Glogomirs Oma isst Popel")

print(s)


