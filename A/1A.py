from math import ceil

n, m, a = input().split(' ')

rows = ceil(int(m)/int(a))
boxes = ceil(int(n)/int(a))

print(rows*boxes)
