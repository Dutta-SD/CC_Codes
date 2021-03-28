h, w, x, y = map(int, input().split())

mat = [None for i in range(h)]

for i in range(h):
    mat[i] = list(input())


# print(mat)
x -= 1
y -= 1

numSquares = 0

for j in range(y-1, -1, -1):
    # print(x, j)
    try:
        if mat[x][j] == '.':
            numSquares += 1
        elif mat[x][j] == '#':
            break
    
    except Exception:
        pass

for j in range(y+1, w, 1):
    # print(x, j)
    try:
        if mat[x][j] == '.':
            numSquares += 1
        elif mat[x][j] == '#':
            break
    except Exception:
        pass

for i in range(x-1, -1, -1):
    # print(i, y)
    try:
        if mat[i][y] == '.':
            numSquares += 1
        elif mat[i][y] == '#':
            break
    except Exception:
        pass

for i in range(x + 1, h, 1):
    # print(i, y)
    try:
        if mat[i][y] == '.':
            numSquares += 1
        elif mat[i][y] == '#':
            break
    except Exception:
        pass

print(numSquares + 1)