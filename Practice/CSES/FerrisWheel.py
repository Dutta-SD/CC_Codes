n, x = map(int, input().split())
w = sorted(list(map(int, input().split())))
c = 0
i = 0
j = n-1
while i <= j:
    if w[i] + w[j] > x : j -= 1
    else:
        i += 1
        j -= 1
    c += 1
print(c)