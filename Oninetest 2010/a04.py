#!User/bin/Python3




def hintereinander(*funcs):
    y=0
    for ele in funcs[::-1]:
        x = lambda x: ele(x)
    
        
    return x

def add(x):
    return x + 1

def mult(x):
    return x * 2


g = hintereinander(add, mult)
print(g(5))
        
    




#def partiell(func, *args): 