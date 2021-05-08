n, k = map(int, input().split())
# k = int(k)
i = 0

while i < k:
    if n % 200 == 0:
        n //= 200
    else:
        n = int(f"{n}200")

    i += 1
print(n)