import math

prime = 10**9+7
test = int(input())
i=0
while i<test:
    N = int(input())
    result = 0
    if(N==1):
        result = 1
    elif(N==2):
        result = 0
    elif(N==3):
        result = 6
    elif(N==4):
        result = 56
    elif(N==5):
        result = 562
    elif(N==6):
        result = 5625
    else:
        left = N-6
        p = 10**left
        result = 5625*p
    print(result%prime)
    
    i+=1
