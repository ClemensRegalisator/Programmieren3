#!user/bin/python3
# -*- coding:UTF-8 -*-

print("A:")

print([x*x for x in range(1,11) if x % 2 == 0])

y = 1234

print([x for x in range(1, y) if y % x == 0])

print("B:")

print(filter(lambda x: x % 2 == 0, list(map(lambda x: x*x, range(1,11)))))

print(filter(lambda x: y % x == 0, list(map(lambda x:x, range(1,y)))))

