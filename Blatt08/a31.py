#!user/bin/python3
#-*- coding:UTF-8-*-

import sys

argc = len(sys.argv)
progname = sys.argv[0]
argumente = sys.argv[1:]

file = open(argumente[0])
print(file.read())




