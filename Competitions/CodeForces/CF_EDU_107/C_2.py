input()
colors = input().split()
queries = input().split()

for q in queries:
    idx = colors.index(q)
    print(idx + 1, end = " ")
    for e in range(idx , 0 , -1):
        colors[e], colors[e-1] = colors[e-1], colors[e]