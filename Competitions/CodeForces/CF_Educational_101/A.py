# RBS 
t = int(input())
for _ in range(t):
    s = input()
    if len(s) % 2 != 0:
        print('NO')
    elif s[0] == ')' or s[-1] == '(':
        print('NO')
    else:
        print('YES')