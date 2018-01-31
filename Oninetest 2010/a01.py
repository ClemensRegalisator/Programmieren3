#!User/bin/Python3

def process(lines, split=":", key=0, del_key=False):
    dicto = {}
    for ele in lines:
        list = ele.split(split)
        if key > len(list):
            key = len(list) - 1
        
        dicto[list[key]] = list
        if del_key == True:
            dicto.get(list[key]).remove(list[key])
        
    return dicto
            
            
            

lines = ["Hallo:ich:mag:Euter", "Waroom:hat:Heatler:die:Yooden:verga$t?", "ja:nein:doch:aaaah"]

print(process(lines, ":", 10, True))       