for i in range(int(input())):
    n, k = map(int, input().split())
    s = input()
    i = 0
    j = n - 1
    count = 0
    while i < j:
        if s[i] == s[j]:
            count += 1
            i += 1
            j -= 1
        else:
            break
    if count > k:
        print("YES")
    elif count == k and i <= j:
        print("YES")
    else:
        print("NO")