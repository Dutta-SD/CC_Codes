# UPSOLVE
x = input()
m = int(input())

count = 0

def convert_base_d(n, d):
    a = ''
    while n != 0 :
        c = n % d
        a += str(c)
        n //= d
    return int(a[-1 : : -1])

d = int(max(x))
x = int(x)

t = convert_base_d(m, d +1)

while t >= x:
    count += 1
    d += 1
    t = convert_base_d(m, d + 1)

print(count)