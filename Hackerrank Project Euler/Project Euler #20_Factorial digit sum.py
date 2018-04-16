# Author: Bishal Sarang
for i in range(int(raw_input().strip())): #Testcases
    fact , sum = 1, 0
    for j in range(1,int(raw_input().strip()) + 1): #factorial of nth number
        fact = fact * j
    for char in str(fact): #Extract each characters from results and typecast to integer and calculates sum
        sum += int(char)
    print sum
