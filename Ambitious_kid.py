n = int(input())
s = input().split()
min = abs(int(s[0]))
for i in s:
    temp = abs(int(i))
    if temp < min:
        min = temp
print(min)