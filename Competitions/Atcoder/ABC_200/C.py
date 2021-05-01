from itertools import combinations

n = int(input())
c = combinations (range(n), 3)

candidates = [tuple(map(int, input().split())) for _ in range(n)]

teamPower = -1
for item in c:
    power = min([max([i, j, k]) for i, j, k in zip(*[candidates[p] for p in item])])
    teamPower = max(power, teamPower)

print(teamPower)