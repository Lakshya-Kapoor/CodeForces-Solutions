n = int(input())
num = 0
s = input()
s1 = ''
if s.count('x') < n//2:
    count = n//2 - s.count('x')
    print(count)
    for i in range(len(s)):
        if count == 0:
            print(s1+s[i:])
            break
        if s[i] == 'X':
            count -= 1
        s1 += 'x'
elif s.count('x') > n//2:
    count = s.count('x') - n//2
    print(count)
    for i in range(len(s)):
        if count == 0:
            print(s1+s[i:])
            break
        if s[i] == 'x':
            count -= 1
        s1 += 'X'
else:
    print(0)
    print(s)