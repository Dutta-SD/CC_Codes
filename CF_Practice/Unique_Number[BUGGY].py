# Unique number - CF 690
t = int(input())
for i in range(t):
    num = []
    max_num = 9
    sum_dig = int(input())
    while sum_dig >= 0:
        sum_dig -= max_num
        num.append(10 - max_num)
        if(sum_dig >= max_num):
            print(-1)
            break
        max_num -= 1
    print(''.join(map(str, num[-1 : : -1])))