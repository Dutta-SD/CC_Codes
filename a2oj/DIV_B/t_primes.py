input()
def y_or_n(val : str):
    val = int(val)

    def isPrime(n):
        n = int(n)
        if n == 1 or n == 0: return False
        for i in range(2,int(n**0.5)+1):
            if n%i==0:
                return False        
        return True

    def sqNum(n):
        root = int(n**0.5)
        return True if root*root == n else False

    if sqNum(val) and isPrime(val**0.5):
        return "YES\n"
    return "NO\n"    

vals = list(map(y_or_n, input().split()))

print("".join(vals))
