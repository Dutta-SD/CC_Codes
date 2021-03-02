t = input()
if t.upper() == t or t[0].lower() + t[1:].upper() == t:
    print(t.swapcase())
else:
    print(t)