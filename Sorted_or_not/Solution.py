a = list(map(int,input().split(' ')))
del a[0]
asc = a[:]
desc = a[:]
asc.sort()
desc.sort(reverse=True)
# print("A",a)
# print("Asc",asc)
# print("Desc",desc)
if(a==asc or a==desc):
    print("1")
else:
    print("0")