l = list(map(int, input().split()))
pref = ['S', 'M', 'L', 'XL', 'XXL']
for i in range(int(input())):
    size = input()
    ind = pref.index(size)
    if l[ind] != 0:
        l[ind] -= 1
        print(size)
    else:
        left = ind - 1
        right = ind + 1
        while True:
            if right <= 4:
                if l[right] != 0:
                    l[right] -= 1
                    print(pref[right])
                    break
                else:
                    right += 1
            if left >= 0:
                if left <= 4:
                    if l[left] != 0:
                        l[left] -= 1
                        print(pref[left])
                        break
                    else:
                        left -= 1
