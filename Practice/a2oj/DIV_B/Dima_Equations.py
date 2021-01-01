a, b, c = map(int, input().split())
def S(x :int):
    return sum(map(int, str(abs(x))))

sols = []

for s in range(1, 81):
    # s is the sum of digits of x1
    # We check if there is any equation 
    # where sum of digs is s
    x = b*(s**a) + c
    if s == S(x) and x < 1e9 and x > 0:
        sols.append(x)

print(len(sols))
[print(i, end=" ") for i in sols]