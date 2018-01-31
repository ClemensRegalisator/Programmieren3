#!user/bin/python3
# -*- coding:UTF-8 -*-
import re

eingabe = "22.01.2018"
pattern1 = re.compile("[0-9]{2}[/.][0-9]{2}[/.][0-9]{4}")
pattern2 = re.compile("(([\d]+)|([\d]{1,3}(.[\d]{3})*)),[\d]{2}( EUR)?")
pattern3 = re.compile("(([+][\d]{2} )|0)([\d]{2, 4}( |-))*")


print(pattern1.match(eingabe))
