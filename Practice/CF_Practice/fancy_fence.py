import fractions

for _ in range(int(input())):
    theta = int(input())
    k = fractions.Fraction(180, theta)

    n = 2*k / (k-1)

    if n.denominator == 1:
        print('YES')
    else:
        print('NO')