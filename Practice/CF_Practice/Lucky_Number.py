from itertools import product
l1 = [0, 4, 7]
l2 = [4, 7]

c = product(l1, l1, l2)
s = set()

for item in c:
    t = ''.join(map(str, item))
    if '0' not in str(int(t)):
        s.add(int(t))

n = int(input())

for i in s:
    if n % i == 0:
        print('YES')
        break
else:
    print('NO')