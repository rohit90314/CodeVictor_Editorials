import math

prime = 10**9+7
test = int(input())
i=0
while i<test:
    N = int(input())
    result = int(N*(N+1)*(N+2)/6)
    print(result%prime)
    i+=1