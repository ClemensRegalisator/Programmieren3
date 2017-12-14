#!user/bin/python3
#-*- coding:UTF-8-*-



def ggtNaiv(x,y):
    "naiver ggT Algorithmus"
    if x > y:
        return ggtNaiv(x-y, y)
    elif y > x:
        return ggtNaiv(y-x, x)
    else:
        return x


def ggT(x,y):
    if x > y and y != 0:
        return ggT(x % y, y)
    elif x < y and x != 0:
        return ggT(y % x, x)
    else:
        if x != 0:
            return x
        if y != 0:
            return y

def ggTit(x,y):
    while x != 0 and y != 0:
        if x > y:
            x = x % y
        else:
            y = y % x

    return x if x != 0 else y

def ggTI(*a):
    a = list(a)
    for i in range(len(a) -1):
            a[i+1] = ggT(a[i], a[i+1])
    return a[i+1]



print(ggTI(200, 100, 50, 5, 10, 25))


summe = 0
anzahl = 0

with open("C:/Users/Clemens/PycharmProjects/Programmieren3/Blatt08/a30-ggts.dat") as f:
        lines = f.readlines()
        for i in range(0, len(lines), 2):
            a = int(lines[i])
            b = int(lines[i+1])
            summe += ggT(a,b)
            anzahl += 1
        print("Mittelwert:", summe / anzahl)
