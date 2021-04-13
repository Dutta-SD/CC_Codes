input()
colors = input().split()
queries = input().split()
# INPUT END

for q in queries:
    # print(f"COLOR INITIAL : {colors}")
    idx = colors.index(q)
    print(idx + 1, end = " ")
    a = [colors[idx]]
    b = colors [:idx]
    c = colors[idx + 1 : ]
    colors = a + b + c
    # print(f"COLOR FINAL : {colors}")