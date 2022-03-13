s = str(input())

vowels = [ 'a' , 'e' , 'i' , 'o' , 'u' , 'A' , 'E' , 'I' , 'O' , 'U' , 'y' , 'Y']

sNew = ""

for i in s:
    if (i not in vowels):
        sNew += i;

sNew_out = ""

for i in sNew:
    sNew_out += "."
    sNew_out += i.lower()

print (sNew_out)
