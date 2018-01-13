#Author : Bishal Sarang
n = int(raw_input())
print sorted(list(set(map(int, raw_input().split()))))[-2]