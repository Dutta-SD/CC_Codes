A, B = map(int, input().split())
for c in range(B, 0, -1):
    if (A + c - 1) // c < B // c:
        print(c)
        break