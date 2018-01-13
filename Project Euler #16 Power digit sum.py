#Bishal Sarang
for i in range(int(raw_input().strip())):
    total = 0
    for char in str(2 ** int(raw_input().strip())):
        total = total + int(char)
    print total