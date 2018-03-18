#Author: Bishal Sarang
n, k = map(int, raw_input().split())
dict = {0:9, 1 : 1, 2: 2 , 3 : 3, 4: 4, 5 : 5, 6 : 6 , 7 : 7, 8: 8 }
value = n  * k;
print dict[sum([int(i) for i in list(str(value))]) % 9]


