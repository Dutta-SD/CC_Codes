n, m = map(int ,input().split())
arr = list(map(int, input().split()))
dp = [0 for _ in range(n)]
dp[-1] = 1  # Init dp array


uniq = set()
uniq.add(arr[-1])
for i in range(n-2, -1, -1):

    num_uniq = dp[i+1]
    if arr[i] not in uniq:
        num_uniq += 1
        uniq.add(arr[i])

    dp[i] = num_uniq

# print(dp)

for t in range(m):
    l = int(input())
    print(dp[l-1])