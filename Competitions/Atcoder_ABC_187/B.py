from itertools import combinations

n = int(input())
pairs = []
for _ in range(n):
    x, y = map(int, input().split())
    # print("Hello ", x, y)
    pairs.append((x, y))

count = [
    1 if abs(p1[1]-p2[1]) <= abs(p1[0] - p2[0]) else 0 
    for i, p1 in enumerate(pairs) for j, p2 in enumerate(pairs) if i < j
    ]
print(sum(count))

