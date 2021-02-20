txt = input()
flag = True
for i in range(len(txt)):
    if i % 2 == 0 and txt[i].upper() == txt[i]:
        flag = False
        break
    if i % 2 == 1 and txt[i].lower() == txt[i]:
        flag = False
        break

if flag:
    print('Yes')
else:
    print('No')