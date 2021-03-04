# Beautiful problem
n = int(input())
if 1 < n <= 3:
    print('NO SOLUTION')
    exit(0)

if n == 1:
    print(1)
    exit(0)

a = list(range(1, n+1))
x = a[0 : : 2]
y = a[1 :  : 2]
y.extend(x)
print(*y)