# Author: Bishal Sarang
for i in range(int(raw_input().strip())):
    fact , sum = 1, 0
    for j in range(1,int(raw_input().strip()) + 1):
        fact = fact * j
    for char in str(fact):
        sum += int(char)
    print sum
