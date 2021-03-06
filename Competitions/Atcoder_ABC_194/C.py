from itertools import combinations

n = int(input())

a = map(int, input().split())

print(sum([(i - j)*(i-j) for i, j in combinations(a, 2)]))