from collections import deque
s = input()

back = True
a = deque()

for c in s:
    if c == 'R':
        back = not back
        continue

    # non r, append at back normally
    try:
        if back:
            if c == a[-1]:
                a.pop()
            else:
                a.append(c)
        
        else:
            if c == a[0]:
                a.popleft()
            else:
                a.appendleft(c)
    except IndexError as e:
        a.append(c)

    # print(f"CHAR : {c}, DEQUEUE : {a}")

a = [i for i in reversed(a)]
print(''.join(a))