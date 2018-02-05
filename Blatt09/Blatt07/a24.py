#!user/bin/python3
#-*- coding:UTF-8-*-

print("Teil 1: ")

lst = [1,2,3]
print("For-Schleife: ")
for e in lst:
    print(e)

i = 0
print("While-Schleife: ")
while i < len(lst):
    print(lst[i])
    i = i+1


print("Teil 2: ")

m = [5, 3, 6, 8, 1]

print("While-Schleife: ")

i = 0

while i < len(m):
    z = m[i]
    print(z, "hoch zwei ist", z**2)
    i = i + 1

print("For-Schleife: ")

for e in m:
    z = e
    print(z, "hoch zwei ist", z**2)