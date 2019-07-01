#!user/bin/python3
# -*- coding:UTF-8 -*-

import sys

 


print("".join(["abcdefghijklmnopqrstuvwxyz"["irjmnzltacogdeksvbphxqyuwf".index(y)] if y in "irjmnzltacogdeksvbphxqyuwf" else y for y in open(sys.argv[1]).read().lower()]))
print(open(sys.argv[1]).readlines())

