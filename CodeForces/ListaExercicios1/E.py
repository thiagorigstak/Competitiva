inpt = int(input())
lst = []
x = list(map(int, input().split()))
x = sorted(x)
x = [*set(x)]
#print(x)
for i in range (len(x)):
    if i <= x[i] and x not in lst:
        lst.append(x[i])
#print(lst)
print(len(lst))