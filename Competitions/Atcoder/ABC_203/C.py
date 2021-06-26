n, k = map(int, input().split())

frnd = {}

for _ in range(n):
    v, m = map(int, input().split())
    frnd[v] = frnd.get(v, 0) + m

money = k
finalpos = 0

key = list(frnd.keys())
key.sort()

i = 0

# print(key)
# print(frnd)
key.append(float('inf'))

while money > 0 and i < len(key):
    if key[i] - finalpos > money:
        # print(f"Current money no move = {money}")
        finalpos += money
        money = 0

    else:
        money = money - (key[i] - finalpos) + frnd[key[i]]
        # print(f"Current money to next friend = {money}")
        finalpos = key[i]
        i += 1
        # print(finalpos)

print(finalpos)