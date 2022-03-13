def sumOfDigits (strN):
    sum = 0
    for i in strN:
        sum += int(i)

    return sum

def checkZero(strN):
    for i in strN:
        if i == '0':
            return True
    return False

def checkNumber(strN, n):
    if ((str(n) in strN) and (checkZero == True)):
        return False
    return True

def numIncrement(n):
    i = 0
    num = []
    while (checkNumber(str(i), n) == True):
        if sumOfDigits(str(i)) == n:
            num.append(i)
            i+=1
            if ( i == n ):
                i+=1
        else:
            i+=1
            if ( i == n ):
                i+=1
            continue

    return i

print(numIncrement(3))