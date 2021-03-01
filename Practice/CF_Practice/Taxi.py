from collections import Counter
from math import ceil
input()
s = Counter(map(int, input().split()))
a = min(s[3], s[1])
b = ceil(s[2] / 2)
print(s[4]+s[3]+s[1] - 2*a + b)