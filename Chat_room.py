s = input()
t = 'hello'
j = 0
for i in s:
    if i == t[j]:
        j += 1
    if j == len(t):
        print("YES")
        break
else:
    print("NO")