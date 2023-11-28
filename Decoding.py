n = int(input())
s = list(input())
s1 = []
for i in range(n-1, -1, -1):
    mid = len(s1)//2
    s1.insert(mid, s[i])
print(''.join(s1))
