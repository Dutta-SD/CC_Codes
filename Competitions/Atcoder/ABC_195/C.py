n = int(input())

commas = 0

if n <= 1e3 -1:
    # print('Hello')
    commas = 0
elif n <= 1e6 -1:
    commas = (n-(1e3)+1)*1
elif n <= 1e9 -1:
    commas = (1e3-1)*0 + (1e6-1e3)*1 + (n - (1e6)+1)*2
elif n <= 1e12 -1:
    commas = (1e3-1)*0 + (1e6-1e3)*1 + (1e9-1e6)*2 + (n - 1e9 + 1)*3
elif n <= 1e15 -1:
    commas = (1e3-1)*0 + (1e6-1e3)*1 + (1e9-1e6)*2 + (1e12-1e9)*3 + (n - 1e12 + 1)*4
elif n == 1e15:
    commas = (1e3-1)*0 + (1e6-1e3)*1 + (1e9-1e6)*2 + (1e12-1e9)*3 + (1e15 - 1e12)*4 + 5

print(int(commas))