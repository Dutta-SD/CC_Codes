n = int(input())

def numWays(x):
    a = x*x
    a = (a*(a-1)) // 2
    return a - (4*(x-1)*(x-2))

print(*[numWays(i) for i in range(1, n+1)], sep='\n')