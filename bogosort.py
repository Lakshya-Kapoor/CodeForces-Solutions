for i in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    for i in sorted(l, reverse=True):
        print(i, end = ' ')