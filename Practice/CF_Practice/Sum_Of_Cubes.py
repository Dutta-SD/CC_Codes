a = {i*i*i for i in range(1, 10**4)}

t = int(input())
for _ in range(t):
    x = int(input())

    flag = False
    for item in a:
        if x - item in a:
            flag = True           
            break
    
    print('YES' if flag else 'NO')