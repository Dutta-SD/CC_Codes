for i in range(int(input())):
    n, k = map(int, input().split())
    print("YES" if k*k <= n and k % 2 == n % 2 else 'NO')