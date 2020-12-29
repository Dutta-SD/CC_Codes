from collections import deque
t = int(input())
for _ in range(t):
    seq = input()
    stk = deque()
    flag = True

    for c in seq:
        if c == ")":
            if len(stk) == 0:
                flag = False
                break
            else :
                stk.pop()
        elif c == "(":
            stk.append(c)
        else:
            if len(stk) != 0:
                stk.pop()            
            else:
                stk.append(c)

    if flag and len(stk) == 0:
        print("YES")
    else:
        print("NO")