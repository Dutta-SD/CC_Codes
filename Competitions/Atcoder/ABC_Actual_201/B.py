n = int(input())

mts = []

for i in range(n):
    name, height = input().split()
    mts.append((int(height), name))

mts.sort(reverse=True, key=lambda x : x[0])

print(mts[1][1])