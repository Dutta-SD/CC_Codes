n = int(input())

a = list(map(int, input().split()))

x = sum([i*i for i in a])

s = sum(a)

print((n*x) - (s*s))