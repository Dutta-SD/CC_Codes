x, n = map(int, input().split())
nums = list(map(int, input().split()))
a, b = 0, 0
for i in range(x, 101):
    if i not in nums:
        a = i
        break

for i in range(x-1, 0, -1):
    if i not in nums:
        b = i
        break
  
print(min(a, b))