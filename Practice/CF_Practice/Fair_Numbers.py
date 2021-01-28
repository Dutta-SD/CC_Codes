from math import lcm, ceil
t = int(input())
for i in range(t):
    n = input()
    num = [int(c) for c in n if c != '0']
    n = int(n)
    multiple = lcm(*num)
    x = ceil(n / multiple) * multiple
    print(x)