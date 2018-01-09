#!user/bin/python3
# -*- coding:UTF-8 -*-

def auskunft(linie, start, ziel):
    file = open("fahrplan.txt")
    sammlung = list()
    zeit = 0
    stationen = list()
    stationen.append(start)

    for ele in file.readlines():
        liste = ele.split(";")
        liste[3] = int(liste[3][0])
        sammlung.append(liste)

    print("Mit der Linie " + linie + " von " + start + " nach " + ziel + ": " )

    while start != ziel:
        for elem in sammlung:
            if elem[0] == linie:
                if elem[1] == start:
                    stationen.append(elem[2])
                    start = elem[2]
                    zeit += elem[3]
                    if start == ziel:
                        break

    print(zeit, stationen)





auskunft("S9", "Kelsterbach", "Niederrad")


