#!user/bin/python3
# -*- coding:UTF-8 -*-

import a39



class Messreihe():
    
    def __init__(self, stringfolge=None):
        self.liste = []
        if stringfolge is not None:
            for line in stringfolge:
                m = a39.Messwert(line)
                self.liste.append(m)
                
    def __len__(self):
        return(len(self.liste))
    
    def add(self, *other):
        for ele in other:
            if ele not in self.liste:
                self.liste.append(ele)
    
    def __add__(self, other):
        if type(other) == Messreihe:
            for ele in other.liste:
                if ele not in self.liste:
                    self.liste.append(ele)
    
    
    def __iter__(self):
        
        return MessreihenIterator(self.liste)
    
    def __getitem__(self, item):
        
        if type(item) == int:
            return self.liste[item]
        if type(item) == str:
            new = Messreihe()
            for ele in self.liste :
                if ele.zeitpunkt[:len(item)] == item:
                    new.add(ele)
        if type(item) == slice:
            return self.liste[item.start : item.stop : item.step]
                    
            return new
    
    
        
        
        


class MessreihenIterator():
    def __init__(self, liste):
        self.pos = -1
        self.liste = liste
    
    def __next__(self):
        self.pos += 1
        if self.pos >= len(self.liste):
            raise StopIteration
        return self.liste(self.pos)        
        
        
        
    
    
if __name__ == '__main__':
    test = Messreihe(open("messwerte.csv"))
    
    
    print(len(test))
    
    print(min(test, key=lambda Messwert: Messwert.temperatur))
    print(max(test, key=lambda Messwert: Messwert.temperatur))
    
    for ele in test:
        if ele.temperatur > 33:
            print(ele)
   
    for ele in test["2017"]:
       if ele.temperatur > 26:
           counter = counter +1 
    print counter        
        
    
    
            

