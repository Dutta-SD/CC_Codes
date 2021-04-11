for t in range(int(input())):
    n = int(input())
    pos = []
    mat = [None for _ in range(n)]

    for i in range(n):
        mat[i] = list(input())
        for j in range(n):
            if '*' == mat[i][j]:
                pos.append((i, j))

    a, b = pos

    # case 1, same verticl line
    if a[1] == b[1]:
        if a[1] == 0:
            pos.append((a[0], a[1] + 1))
            pos.append((b[0], b[1] + 1))

        else:
            pos.append((a[0], a[1] - 1))
            pos.append((b[0], b[1] - 1))

    # case 2, same horiz line
    elif a[0] == b[0]:
        if a[0] == 0:
            pos.append((a[0]+1, a[1]))
            pos.append((b[0]+1, b[1]))

        else:
            pos.append((a[0]-1, a[1]))
            pos.append((b[0]-1, b[1]))

    # cross
    else:
        x1, y1 = a
        x2, y2 = b
        pos.append((x1, y2))
        pos.append((x2, y1))

    for e in pos:
        mat[e[0]][e[1]] = '*'


    # printing
    # print("\n-----START-----")
    for i in range(n):
        print(*mat[i], sep='', end='\n')
    # print("-----END------")