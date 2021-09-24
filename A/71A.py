n = int(input())

L = []

for i in range(n):
    str1 = str(input())
    L.append (str1)

for i in L:
    if (len(i) > 10):
        print(i[0] + str(len(i)-2) + i[-1])
    else:
        print(i)