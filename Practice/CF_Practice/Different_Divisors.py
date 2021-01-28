from math import gcd
t = int(input())
for i in range(t):
    d = int(input())
    print((1+d)*(1+2*d) // gcd(1+d, 1+2*d))