for i in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    d = {}
    for idx, e in enumerate(a):
        d[e] = (idx, d.get(e, (idx, 0))[1] + 1)

    # print(d)
    for value in d.values():
        if value[1] == 1:
            print(value[0] + 1)
            break   