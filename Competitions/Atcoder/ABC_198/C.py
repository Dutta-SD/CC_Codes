def dist(x1, y1, x2, y2):
    '''NORM'''
    return ((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2))**0.5

r, x, y = map(int, input().split())

d = dist(0, 0, x, y)

k = int(d // r)

if d <= r:
    print(2)
elif d % r == 0:
    print(k)
else:
    print(k + 1)