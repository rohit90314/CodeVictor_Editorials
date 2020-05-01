import math

test = int(input())
i=0
while i<test:
    num = int(input())
    result = len(bin(num))-2
    print(result)
    i+=1
