# Author : Bishal Sarang
sum = 0;
for i in range(int(raw_input().strip())): #Value of N
     sum += int(raw_input().strip()); #sum of numbers
sum = str(sum) #typecast to string
print sum[0: 10] #print first 10 digits