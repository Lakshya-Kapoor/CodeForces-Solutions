for i in range(int(input())):
    l = int(input())
    s = input()
    i , j = 0, l - 1
    while i < j:
        if (abs(ord(s[i]) - ord(s[j])) == 2 or abs(ord(s[i]) - ord(s[j])) == 0):
            i += 1
            j -= 1
        else:
            print("NO")
            break
    if i >= j:
        print("YES")