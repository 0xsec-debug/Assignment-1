def sum(k,target):
    a={}
    for i,n in enumerate(k):
        temp  = target - n
        if temp in a:
            return[a[temp],i]
        a[n]=i

k = [2,3,4]
target = 6
result = sum(k,target)
print(result)