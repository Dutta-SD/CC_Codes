from heapq import heapify, heappop

n = int(input())
a = [None for i in range(n)]
b = [None for i in range(n)]

for i in range(n):
    a[i], b[i] = map(int, input().split())

a1 = a[:]
b1 = b[:]

heapify(a)
heapify(b)

x = heappop(a)
y = heappop(b)

x1 = heappop(a)
y1 = heappop(b)


if a1.index(x) == b1.index(y):
    print(min([x+y, max(x, y1), max(x1, y)]))
else:
    print(max(x, y))