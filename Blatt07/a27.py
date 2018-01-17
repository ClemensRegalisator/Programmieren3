#!user/bin/python3
#-*- coding:UTF-8-*-

def dreh(lst):

    if len(lst) > 0:
        i = lst[0]
        lst = dreh(lst[1:])
        lst.append(i)



    return lst

lst = list(range(100))

lst = dreh(lst)
print(lst)


