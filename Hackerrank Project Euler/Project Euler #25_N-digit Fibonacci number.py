#Author: Bishal Sarang
a, b, length, i = 0, 1, 1, 0
store = { }
store[length] = a
fib = { }

while len(str(a)) < 5000:
    fib[i] = a
    if(len(str(fib[i])) > length):
        length = length + 1
   		store[length] = i
    i = i + 1 
    a,b = b, a + b;
for i in range(int(raw_input().strip())):
               print store[(int(raw_input().strip()))]
    
    
    