s = str(input())
count_upper = 0
count_lower = 0

for i in s:
    if i.isupper() == True:
        count_upper+=1
    else:
        count_lower+=1

if count_upper>count_lower:
    print(s.upper())
else:
    print(s.lower())
