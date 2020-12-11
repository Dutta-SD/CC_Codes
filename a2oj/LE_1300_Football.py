from collections import Counter
cnter = Counter()

n = int(input())
for _ in range(n):
    cnter[input()] += 1

print(cnter.most_common()[0][0])
