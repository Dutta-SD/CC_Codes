# Guess the number
n, m = map(int, input().split())
num = ['0' for _ in range(n)]
for i in range(m):
    si, ci = input().split()
    si = int(si) - 1
    if num[si] != '0' and ci != num[si]:
        print(-1)
        exit(0)
    else:
        num[si] = ci

num = ''.join(num)

num = -1 if num.count('0') == 3 else int(num)
print(num)