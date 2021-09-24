s = str(input())
L = []

for i in s:
    if i in L:
        continue
    else:
        L.append(i)

if len(L)%2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")