#!user/bin/python3
# -*- coding:UTF-8 -*-



liste = open("a36-bonz.txt").read().split("\n")

print(sorted([liste[x].split(";")[4] for x in range(0, len(liste)) if liste[x].split(";")[0] == "Herr"]))
print(sum([int(liste[x].split(";")[3]) for x in range(0, len(liste)) if liste[x].split(";")[0] == "Frau"]))
print((sorted([z for z in[(y[3], y[4]) for y in [x.strip().split(";")
                              for x in open("a36-bonz.txt").readlines()]
       if y[2].startswith("J")]], reverse=True, key=lambda x: int(x[0]))[0])[1])
print([liste[x].split(";")[0] + " " + liste[x].split(";")[1] + " bekommt mehr als er verdient" if liste[x].split(";")[0] == "Herr" else liste[x].split(";")[0] + " " + liste[x].split(";")[1] + " bekommt mehr als sie verdient" for x in range(0, len(liste)) if int(liste[x].split(";")[3]) > 100000])
