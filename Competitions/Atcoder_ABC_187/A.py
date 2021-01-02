a, b = input().split()
print(
    max(
        sum(map(int, list(a))),
        sum(map(int, list(b)))
    )
)
