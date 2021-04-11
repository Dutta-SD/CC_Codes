n = input()
s = len(n)

if s % 2 == 1:
    # Odd
    print(10**(s // 2) - 1)

else:
    # t = (s -2) // 2
    n1, n2 = int(n[:s // 2]), int(n[s // 2:])
    choices = 0
    if n1 > n2:
        choices = n1 - 1
    else :
        choices = n1
    print(choices)