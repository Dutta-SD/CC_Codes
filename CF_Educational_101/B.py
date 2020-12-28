t = int(input())
for _ in range(t):
    l1 = int(input())
    nums_1 = list(map(int, input()))
    l2 = int(input())
    nums_2 = list(map(int, input()))

    val_1, val_2 = [], []
    val_1.insert(0, l1[-1])
    val_2.insert(0, l2[-1])

    for i in range(l1-2, -1, -1):
        val_1.insert(0, val_1[0] + nums_1[i])

    for i in range(l2-2, -1, -1):
        val_2.insert(0, val_2[0] + nums_2[i])


