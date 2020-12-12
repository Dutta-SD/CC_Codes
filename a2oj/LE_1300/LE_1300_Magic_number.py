string = input()
length_original = len(string)
string = string.replace('144', 'xxx').replace('14', 'xx').replace('1', 'x')
if string.count('x') == length_original:
    print('YES')
else:
    print('NO')