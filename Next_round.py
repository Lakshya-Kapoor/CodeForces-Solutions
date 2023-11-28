n, k = map(int, input().split())
l = list(map(int, input().split()))
def ZeroCount(arr, i):
    count = 0
    while i >= 0:
        if arr[i] == 0:
            count += 1
            i -= 1
        else:
            break
    return count
if l[k-1]:
    count = 0
    for i in range(k, n):
        if l[i] >= l[k-1]:
            count += 1
        else:
            break
    print(count)
else:
    print(k-ZeroCount(l, k-2))