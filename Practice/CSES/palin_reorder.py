# Palindrome reorder-CSES
from collections import Counter

counts = Counter(input())
# Find if odd count or not
element = [key for key, value in counts.items() if value % 2 == 1]
if len(element) > 1:
    print('NO SOLUTION')
    exit(0)

# print(element)
c = f'{element[0]}' if element else ''
for key, value in counts.items():
    a = key*(value // 2)
    b = ''.join(reversed(a))
    c = a + c + b
    # print(c)
print(c)