l = []
count = 0
for i in range (4):
    try:
        input = int(input())
    except EOFError:
        break
    if input in l:
        count += 1
    else:
        l.append(input)

print (4 - count)