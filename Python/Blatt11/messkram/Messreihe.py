#!user/bin/python3
# -*- coding:UTF-8 -*-

import Messwert
from logging.config import listen
import datetime

def enum(iterable):
    i = -1
    for ele in iterable:
        i +=1
        yield(i, ele)

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
            assert type(ele) == a39.Messwert
            if ele not in self.liste:
                self.liste.append(ele)
    
    def __add__(self, other):
        assert type(other) == Messreihe
        for ele in other.liste:
            if ele not in self.liste:
                self.liste.append(ele)
        return self
    
    
    def __iter__(self):
        
        return MessreihenIterator(self.liste)
    
    def __getitem__(self, item):
        
        if type(item) == int:
            return self.liste[item]
        elif type(item) == str:
            new = Messreihe()
            for ele in self.liste :
                if ele.zeitpunkt[:len(item)] == item:
                    new.add(ele)
            return new        
        elif type(item) == slice:
            self.liste = self.liste[item.start : item.stop : item.step]
            return self
        
        
    def getGenerator(self):
        return MessreihenGenIter(self.liste)
    
    def addNew(self, neu):
        assert type(neu) == a39.Messwert
        temp = datetime.datetime.strptime(self.liste[0].zeitpunkt[:-7], "%Y-%m-%d %H:%M:%S")
        
        
        for ele in self.liste:
            if datetime.datetime.strptime(ele.zeitpunkt[:-7], "%Y-%m-%d %H:%M:%S") > temp:
                temp = datetime.datetime.strptime(ele.zeitpunkt[:-7], "%Y-%m-%d %H:%M:%S")
        print(datetime.datetime.strptime(neu.zeitpunkt[:-7], "%Y-%m-%d %H:%M:%S") > temp)
        print(temp)
        if datetime.datetime.strptime(neu.zeitpunkt[:-7], "%Y-%m-%d %H:%M:%S") > temp:
            self.add(neu)
        else:
            raise MonotonieVerstossError("Hurensohn")
    
    
        
                    
        
    
    
        
        
        


class MessreihenIterator(Messreihe):
    def __init__(self, liste):
        self.pos = -1
        self.liste = liste
    
    def __next__(self,):
        self.pos += 1
        if self.pos >= len(self.liste):
            raise StopIteration
        return self.liste[self.pos]    
        
class MessreihenGenIter(Messreihe):
    
    def __init__(self, liste):
        self.pos = -1
        self.liste = liste
        
    def __iter__(self):
        while True:
            self.pos += 1
            yield self.list[self.pos]
            


class MonotonieVerstossError(ValueError):
    def init(self, message):
        super(ValueError, self).__init__(message)

    
    


