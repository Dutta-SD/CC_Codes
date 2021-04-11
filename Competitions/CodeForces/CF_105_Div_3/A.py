x = [
    ('(', '(', '('),
     ('(', '(', ')'),
      ('(', ')', '('),
       ('(', ')', ')'),
        (')', '(', '('),
         (')', '(', ')'),
          (')', ')', '('),
           (')', ')', ')')]

def isrbs(txt):
    a = []
    for i in txt:
        if i == '(':
            a.append(i)
        elif i == ')':
            if len(a) == 0:
                return False
            a.pop()
    
    if len(a) == 0:
        return True
    return False


def repl(a, item):
    a = a.replace('A', item[0]).replace('B', item[1]).replace('C', item[2])
    return a



t = int(input())
for i in range(t):
    a = input()
    flag = False

    for item in x:
        p = repl(a, item)
        if isrbs(p):
            flag = True
            break
    
    print('YES' if flag else 'NO')