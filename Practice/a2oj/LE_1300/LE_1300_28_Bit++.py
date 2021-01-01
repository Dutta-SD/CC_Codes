times = int(input())
x = 0
for i in range(times):
    opn = input()
    if "++" in opn:
        x += 1
    elif "--" in opn:
        x -= 1

print(x)
