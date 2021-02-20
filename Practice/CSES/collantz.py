# =============================================================================
# Collantz Conjecture : If n is even, divide by 2
# If it is odd, multiply by 3 and add 1 
# =============================================================================

n = int(input())
while(n != 1):
    print(n, end=' ')
    if n & 1:
        n = 3 * n + 1
    else:
        n = n // 2
print(1)