#!User/bin/Python3

def vielfach(g1, n):
    for ele in g1:
        for i in range(n):
            yield ele
            
def nmischen(g1, n ,g2):
    for ele in g1:
        
        for i in range(n):
            yield next(g1)
        yield next(g2)

def getestet(g1, w):
    while True:
        temp = next(g1)
        if w(temp):
            yield temp
        
            
            
def g1(a):
    while True:
        a += 1
        yield a

def g2():
    while True:
        yield "Nuttöööööööö"

gerade = lambda t: t%2 == 0
    
    
x = getestet(g1(-1), gerade)
for ele in range(10):
    print(next(x))


