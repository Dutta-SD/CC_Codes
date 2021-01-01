growth = int(input())
sorted_growths = sorted(list(map(int, input().split())), reverse=True)
count = 0
i = 0

if sum(sorted_growths) < growth:
    print(-1)
    exit(0)
while(growth > 0):
    growth -= sorted_growths[i]
    count += 1
    i+=1

print(count)