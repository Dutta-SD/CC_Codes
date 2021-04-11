a, b = map(int, input().split())
c, d = map(int, input().split())

l = [x - y for x in range(a, b+1) for y in range(c, d+1)]

print(max(l))