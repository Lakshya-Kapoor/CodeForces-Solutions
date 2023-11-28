s = input()
def check(string, n):
    num = n*7
    i = 0
    j = 6
    while i <= j:
        if string[i] != num[i] or string[j] != num[j]:
            return False
        i += 1
        j -= 1
    return True
for i in range(len(s)-6):
    if check(s[i:i+7], s[i]):
        print("YES")
        break
else:
    print("NO")