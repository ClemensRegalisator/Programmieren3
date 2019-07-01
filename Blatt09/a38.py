#!user/bin/python3
# -*- coding:UTF-8 -*-

import itertools


        
def permutations(items):
    n = len(items)
    if n==0:
        yield []
    else:
        for i in range(len(items)):
            for cc in permutations(items[:i]+items[i+1:]):
                yield [items[i]]+cc

for p in permutations([1,2,3,4,5,6,7,8]): print(p)

        
        