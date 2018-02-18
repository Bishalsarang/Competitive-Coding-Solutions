#Author: Bishal Sarang
for i in range(int(raw_input().strip())):
    a, b = map(int, raw_input().split())
    print (pow(a, b,1000000007))