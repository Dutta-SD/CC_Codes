t = int(input())
s = 0
for _ in range(t):
  a, b = map(int, input().split())
  s += ((b-a+1) *(a+b)) / 2
print(int(s))