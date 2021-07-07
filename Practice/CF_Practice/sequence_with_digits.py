# sequence with digits r1200
for i in range(int(input())):
    a, k = map(int, input().split())
    k -= 1

    while k:
        if '0' in str(a):
            break
        else:
            a += int(max(str(a))) * int(min(str(a)))
        k -= 1
    print(a)