places = [0 for i in range(200)]

n = int(input())

# a_i - a_j is a multiple of  200

nums = list(map(int, input().split()))

for e in nums:
    places[e % 200] += 1

numPairs = 0
for e in places:
    if e:
        numPairs += (e * (e - 1)) // 2


print(numPairs)