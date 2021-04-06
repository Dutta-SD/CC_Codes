inf = 1000002
_, value = map(int, input().split())

coins = tuple(map(int, input().split()))

numCoins = [0 for _ in range(value + 1)]

for j in range(1, value + 1):
    minCoins = inf

    for i in range (len(coins)):
        if j >= coins[i]:
            minCoins = min(minCoins, 1 + numCoins[j - coins[i]])

    numCoins[j] = minCoins

a = numCoins[value]
print(-1 if a == inf else a)