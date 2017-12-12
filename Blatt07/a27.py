#!user/bin/python3
#-*- coding:UTF-8-*-

def dreh(lst):

    if len(lst) > 0:
        i = lst[0]
        print(lst)
        lst[0] = i
        dreh(lst[1:len(lst)])


    else:
      return lst



lst = [1,2,3]
print(lst)
print(dreh(lst))