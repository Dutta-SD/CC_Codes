n = int(input())
status = "satisfiable"
stuff = {}

def f():
    global status
    global stuff
    val = input()
    sval = val.lstrip('!')
    if status == 'satisfiable':
        if sval in stuff:
            stuff[sval].add(val)
            if len(stuff[sval]) == 2:
                status = sval
        else:
            a = set()
            a.add(val)
            stuff[sval] = a

[f() for _ in range(n)]

print(status)