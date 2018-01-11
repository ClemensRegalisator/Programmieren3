#!user/bin/python3
# -*- coding:UTF-8 -*-

print("A:")

print([x*x*x for x in range(1,11) if x % 2 == 0])

y = 1234

print([x for x in range(2, y) if y % x == 0])

print([x for x in range(10000, 10101) if len([z for z in range(2, x) if x % z == 0]) == 0])




print("B:")

print(filter(lambda x: x % 2 == 0, list(map(lambda x: x*x, range(1,11)))))

print(filter(lambda x: y % x == 0, list(map(lambda x:x, range(2,y)))))

print(list(filter(lambda x: not list(filter(lambda y: x % y == 0, range(2, x))), range(10000, 10101))))
