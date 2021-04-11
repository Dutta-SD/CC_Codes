m = 10e10
val = [True for _ in range(m+1)]
val[0] = False

j = 2
while(j*j <= m):
    k = j*j
    while(k <= m):
        val[k] = False
        k *= j
    j += 1


n = int(input())

# print(val)
print(sum(val[:n+1]))