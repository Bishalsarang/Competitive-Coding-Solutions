#Author: Bishal Sarang
factorial = { }
factorial[0] = 1
for i in range(1, 10):
    fact = 1
    for j in range(1, i + 1):
        fact = fact * j
    factorial[i] = fact
    
s = str(int(raw_input().strip()))
count = 0
for i in range(11, int(s)):
    total = 0
    for char in str(i):    
        a = int(char)
        total = total + factorial[a]
    if(total % int(i) == 0):   
        count = count + i
print count

    

    
    

    