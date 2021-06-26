from typing import Tuple

n = int(input())

eps = 1e-3

def make_interval(t, l, r):
    # Return tuple
    t, l, r = int(t), int(l), int(r)
    if t == 1:
        return (l, r)
    elif t == 2:
        return (l ,r - eps)
    elif t == 3:
        return (l + eps, r)
    else:
        return (l + eps, r - eps)

def is_intersect(in_1 : Tuple, in_2 :Tuple):
    # in_1 === (l1, r1)
    l1, r1 = in_1
    l2, r2 = in_2
    if (l2 <= l1 and l1 <= r2) or (l1 <= l2 and l2 <= r1):
        return True
    return False

intervals = []
for i in range(n):
    t, l, r = input().split()
    intervals.append(make_interval(t, l, r))

# print(intervals)

nump = 0

for i in range(0, n):
    for j in range(i + 1, n):

        if is_intersect(intervals[i], intervals[j]):
            nump += 1

print(nump)