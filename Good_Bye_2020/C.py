t = int(input())
for i in range(t):
    s = input()
    print(len(s) - len(set(s)))