# Catalan numbers in O(n*n)
from functools import lru_cache

# top down dp
@lru_cache(maxsize=None)
def catalan_top_down(n):
    if n < 2:
        return 1
    return sum((catalan_top_down(i) * catalan_top_down(n - i - 1) for i in range(n)))


# bottom up dp
def catalan_bu(n):
    if n < 2:
        return 1

    ct = [0 for _ in range(n + 1)]
    ct[0] = 1
    ct[1] = 1

    for i in range(2, n + 1):
        for j in range(i):
            ct[i] += ct[j] * ct[i - j - 1]

    return ct[n]

for i in range(10):
    print(catalan_top_down(i))
    print("\t", catalan_bu(i))