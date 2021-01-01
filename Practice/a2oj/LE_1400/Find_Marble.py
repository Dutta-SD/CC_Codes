n, s, t = map(int, input().split())
v = [*range(1, n+1)]
p = list(map(lambda x : int(x) - 1, input().split()))
num_moves = 0
s , t = s-1, t
if t == v[s]:
    print(0)
    exit(0)

for _ in range(n):
    v = [v[i] for i in p]
    num_moves += 1
    if t == v[s]:
        break
    # print(v)
    if s + 1 == v[s]:
        print(-1)
        exit(0)
print(-1 if num_moves == 0 else num_moves)