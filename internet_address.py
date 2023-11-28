s = list(input())
if s[0] == 'h':
    s.insert(4 , '://')
else:
    s.insert(3, '://')
l = len(s) 
for i in range(l-1, -1, -1):
    if s[i-1:i+1] == ['r', 'u']:
        s.insert(i-1, '.')
        if i != l-1:
            s.insert(i+2, '/')
        break

print(''.join(s))