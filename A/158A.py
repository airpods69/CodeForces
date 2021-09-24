n_k = str(input())
L = n_k.split()

n=int(L[0])
k=int(L[1])

inp = str(input())

L_inp = inp.split()

min_k = int(L_inp[k-1])

count = 0

for i in L_inp:
    if (int(i)>= min_k and i!="0"):
        count+=1

print(count)
