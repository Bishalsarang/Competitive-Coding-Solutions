#Author: Bishal Sarang
b, a, n = map(int, raw_input().split())
for i in range(n - 2):
    a, b = a * a + b, a
print a