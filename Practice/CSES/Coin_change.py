n, x = map(int, input().split())

c = tuple(map(int, input().split()))

INF = float('inf')

numCoins = [INF for _  in range(n+1)]
numCoins[0] = 0

for i in range(1, n+1):
    
    for j in c:
        if i - j >= 0:
            numCoins[i] = min(numCoins[i], 1 + numCoins[i-j])

print(-1 if numCoins[n] == INF else numCoins[n])