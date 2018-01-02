a, b, length = 0, 1, 1
store = { } #dictionry that store key(num_of digits) and value(smallest possible numbers)
store[length] = a
fib = { } #dictionry that store key(N) and corresponding fibonacci number
for i in range(35300): #35300 is choosen from hit and trial
    fib[i] = a
    if(len(str(fib[i])) > length):
        length = length + 1
        store[length] = i
    a,b = b, a + b;
for i in range(int(raw_input().strip())): 
               print store[(int(raw_input().strip()))] #Print value stored at particular key
    
    
    