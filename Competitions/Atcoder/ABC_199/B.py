n = int(input())
a_max = max(map(int, input().split()))
b_min = min(map(int, input().split()))

val = b_min - a_max + 1

print(max(val, 0))