#Author: Bishal Sarang
a = int(input().strip())
l = set()
for i in range(1, a):
    for j in range(1, a):
        l.add(pow(i, j))
sums = []
for item in l:
     sums = sums + [sum([int(i) for i in str(item)])]
print (max(sums))
        
    