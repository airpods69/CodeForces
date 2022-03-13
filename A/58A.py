str_in = str(input()).lower()
hello = 'hello'

s_new = ""
j = 0

for i in hello:
    while(j<len(str_in)):
        if (str_in[j] == i):
            s_new += i
            j += 1
            break
        else:
            j += 1
            break
    else:
        s_new = ""

if (s_new == hello):
    print("YES")
else:
    print("NO")
