for i in range(int(input())):

    l, k = map(int, input().split())
    txt = input()

    flag = True

    for i in range(k):

        a = txt[0] if txt != '' else 'x'
        b = txt[-1] if txt != '' else 'y'

        if a != b:
            flag = False
            break

        txt = txt[1 : -1]    

    if flag and len(txt) > 0:
        print('YES')
    else:
        print("NO")