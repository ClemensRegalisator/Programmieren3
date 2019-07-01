#!user/bin/python3
# -*- coding:UTF-8 -*-

from datetime import datetime
import datetime

class Messwert():
    
    
    
    def __init__(self, line = None, temperatur=None):
            
        if temperatur is not None:
            self.parseBoth(line, temperatur)
        
        else:
            self.parseLine(line)
        
        
    def parseLine(self, line):
        "liest einen String ein"
        line = line.replace('"', "")
        line = line.split(',')
        self.zeitpunkt = line[0]
        self.temperatur = float(line[1])
    
        
    def parseBoth(self, zeitpunkt, temperatur):
        "liest String und Zahl getrennt ein"
        self.zeitpunkt = zeitpunkt
        self.temperatur = float(temperatur)
        
    def __repr__(self):
        return "(" + "'" + str(self.zeitpunkt)+ "'"  + ", " + str(self.temperatur) + ")"  
    
    def __eq__ (self, other):
        if self.temperatur == other.temperatur and self.zeitpunkt == other.zeitpunkt:
            return True
        else:
            return False
        
        
    def __it__(self, other):
       d = datetime.datetime.strptime(self.zeitpunkt[:-5], "%Y-%m-%d %H:%M:%S")
       o = datetime.datetime.strptime(other.zeitpunkt[:-5], "%Y-%m-%d %H:%M:%S")
       
       if d == o:
           return self.temperatur < other.temperatur
       else:
       
           return d < o
   
    def __gt__(self, other):
       d = datetime.datetime.strptime(self.zeitpunkt[:-5], "%Y-%m-%d %H:%M:%S")
       o = datetime.datetime.strptime(other.zeitpunkt[:-5], "%Y-%m-%d %H:%M:%S")
       
       
       if d == o:
           return self.temperatur > other.temperatur
       else:
           return d > o
       
    def __hash__(self):
        return hash((self.temperatur, self.zeitpunkt))
        
        
