s = list(input())

lenZero = 0
for i in s[ : : -1]:
    if i != '0':
        break
    lenZero += 1


pad = ['0' for i in range(lenZero)]

pad.extend(s)

if pad == pad[::-1]:
    print('Yes')
else:
    print('No')   