#Sherlock and Permutations
#Author: Bishal Sarang
from math import factorial
for i in range(int(raw_input().strip())):
    n, m = map(int,raw_input().split())
    #Fix one 1 first place then arrange remaining 0's and 1's
    print (factorial(n + m - 1)/ (factorial(m - 1) * factorial(n))) % 1000000007