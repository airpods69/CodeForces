s = str(input())
L = s.split("+")

L.sort()
s1=""

for i in L:
    s1 += str(i) + "+"

print(s1[0:-1])