for i in range(int(input())):
    l = list(map(int, input().split()))
    a, b = l[0], l[1]
    c = l[6]-a-b
    print(a, b, c)
