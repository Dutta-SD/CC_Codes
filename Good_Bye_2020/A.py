from itertools import product
t = int(input())
for i in range(t):
    n = int(input())
    s = list(map(int, input().split()))
    p = set([abs(i-j) for i, j in product(s, s)])
    print(len(p) - 1)