#!user/bin/python3
#-*- coding:UTF-8-*-


def h(a,b,c = 100, *d, **e):
    print(a,b,c,d,e)

h(17, 21), h(10, 20, 30), h(1,2,3,4,5,6, x=7), h(1,2,3,4,5,6, x=7, y=22)