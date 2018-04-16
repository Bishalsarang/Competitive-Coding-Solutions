#Author: Bishal Sarang
for i in range(int(raw_input().strip())):
    a, b, sum = 1, 2, 0;
    n = int(raw_input().strip())
    while b <= n:
        if b % 2 == 0:
            sum += b;   
        a, b = b, a + b
    print (sum)
        
        
    