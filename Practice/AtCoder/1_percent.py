x = int(input())

t = 0
amt = 100
while amt < x:
    amt += amt // 100
    t += 1

print(t)