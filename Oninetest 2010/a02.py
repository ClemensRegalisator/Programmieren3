#!User/bin/Python3

def rumdreh(zk):
    return zk[::-1]
     
def vokale(zk):
    vokale=""
    rest=""
    for ele in zk:
        if ele in "aeiouAEIOU":
            vokale = vokale + ele
        else:
            rest = rest + ele
    
    return (vokale,rest)

def ersetze(zk, dic):
    for ele in dic:
        zk = zk.replace(ele, dic[ele])
        
    return zk
    
            
         
wort = "Hallo ich wollte fragen warum Heatler die YOODEN verga$t hat"    
dic = {"Heatler":"Jens", "YOODEN":"Burger", "verga$t":"gegessen"}


print(ersetze(wort, dic))     
          
#def ersetze(zk, dic):