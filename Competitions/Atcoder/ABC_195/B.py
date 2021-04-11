a, b, w = map(int, input().split())
w *= 1000

def smallest_multiple(num):
    # smallest values of multiple
    for i in range(a, b+1):
        if num % i == 0:
            return i
    return -1

def largest_multiple(num):
    # Largest value of multiple
    for i in range(b, a-1, -1):
        if num % i == 0:
            return i
    return -1

min_m, rem_min = divmod(w, b)
max_m, rem_max = divmod(w, a)
min_extra, max_extra = 0, 0

while min_m != 0:
    if largest_multiple(rem_min) != -1:
        # found multiple
        min_extra += (rem_min // largest_multiple(rem_min))
        break

    min_m -= 1
    rem_min += b

while max_m != 0:
    if smallest_multiple(rem_max) != -1:
        # found multiple
        max_extra += (rem_max // smallest_multiple(rem_max))
        break

    max_m -= 1
    rem_max += a

if max_m == 0 and max_m == 0:
    print('UNSATISFIABLE')
else:
    print(min_m + min_extra)
    print(max_m + max_extra)