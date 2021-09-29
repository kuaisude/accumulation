import math
def isprime(num):
    for j in range(2,int(math.sqrt(num))):
        if num%j == 0:
            return False
    return True
    
    
def ishw(num):
    st = str(num)
    for i in range(len(st)//2):
        if st[i] != st[-1-i]:
            return False     
    return True


ab = input().split(" ")
a = int(ab[0])
b = int(ab[1])

for i in range(a,b+1):
    if isprime(i) and ishw(i):
        print(i)
