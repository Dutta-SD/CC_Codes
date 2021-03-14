n = int(input())

if n % 4 not in [3, 0]:
    print('NO')
    exit(0)

if n % 4 == 3:
    s1 = [1, 2]
    s2 = [3]

    k = 7
    while k <= n:
        s1.extend([k, k-3])
        s2.extend([k-2, k-1])
        k += 4

    print('YES')
    print(len(s1))
    print(*s1)
    print(len(s2))
    print(*s2)

elif n % 4 == 0:
    s1 = [1, 4]
    s2 = [2, 3]

    k = 8
    while k <= n:
        s1.extend([k, k-3])
        s2.extend([k-2, k-1])
        k += 4

    print('YES')
    print(len(s1))
    print(*s1)
    print(len(s2))
    print(*s2)