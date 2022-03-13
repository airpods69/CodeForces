from os import popen
import string


n = int(input())

strings = []

def printAllKLength(set, k):

	n = len(set)
	printAllKLengthRec(set, "", n, k)


def printAllKLengthRec(set, prefix, n, k):
	

	if (k == 0) :
		strings.append(prefix)
		return


	for i in range(n):

		newPrefix = prefix + set[i]
		

		printAllKLengthRec(set, newPrefix, n, k - 1)



	
print("First Test")
set1 = ['a', 'b']
printAllKLength(set1, n)

print(strings)
         
from itertools import groupby

for i in strings[::-1]:
    groups = groupby(i)
    result = [(label, sum(1 for _ in group)) for label, group in groups]
    for j in result:
        if (j[0] == 'b') and (j[1] != 1):
            strings.pop(strings.index(i))

strings.sort()

print(strings)



