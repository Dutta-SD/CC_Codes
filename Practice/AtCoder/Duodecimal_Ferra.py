l = int(input())
num, den = 1, 1
for i in range (1, 12):
    num *= l - i
    den *= i

print(num // den)