from functools import reduce
n = int(input())
vals = list(map(int, input().split()))
vals.sort()
final_value = reduce(lambda x, y: (x+y) / 2, vals)
print(final_value)