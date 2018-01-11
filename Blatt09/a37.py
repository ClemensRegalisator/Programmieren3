#!user/bin/python3
# -*- coding:UTF-8 -*-

import glob
import os.path
import operator



print(sorted({x : os.path.getsize(x) for x in glob.glob("/etc/*.conf")}, key={x : os.path.getsize(x) for x in glob.glob("/etc/*.conf")}.__getitem__,reverse=True)[:3])