test = int(input())
i=0
while i<test:
    N = int(input())
    low = 10**(N-1)
    high = 10**(N)
    cnt=0
    for j in range(low,high):
        if(j%160==0):
            cnt+=1
    print(cnt)
    i+=1