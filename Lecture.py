n, m = map(int, input().split())
d = {}
for i in range(m):
    s = input().split()
    if len(s[1]) < len(s[0]):
        d[s[0]] = s[1]
    else:
        d[s[0]] = s[0]
l = input().split()
for i in range(len(l)):
    print(d[l[i]], end='')
    if i < len(l) - 1:
        print(' ', end='')
    else:
        print()