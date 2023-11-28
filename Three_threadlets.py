for i in range(int(input())):
    s = list(map(int, input().split()))
    s.sort()
    a, b, c = s
    if b%a == 0 and c%a == 0 and b//a + c//a <= 5:
        print("YES")
    else:
        print("NO") 