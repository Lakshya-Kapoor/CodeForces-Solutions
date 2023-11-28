from math import sqrt
n, k = map(int, input().split())
print(int(n - ((sqrt(9 + 8 * (n+k)) - 3)/2)))