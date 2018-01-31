#!User/bin/Python3
# -*- coding:UTF-8 -*-
import re




def validCSV(filename):
    with open(filename) as file:
        a = file.readlines()
        csvPattern = re.compile(r'^(#.*)|(\"[\d]+\"[,]\"[\w]+\"[,]\"[\w]+\")$')
        for line in a:
            if csvPattern.match(line) == None:
                print("Fick dich")
            else:
                print(line)
                
                
validCSV("test1.csv")
            