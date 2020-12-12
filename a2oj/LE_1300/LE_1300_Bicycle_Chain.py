from itertools import product
n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))

gears = [int(j / i) for i, j in product(a, b) if j % i == 0]
max_gear = max(gears)
print(gears.count(max_gear))
