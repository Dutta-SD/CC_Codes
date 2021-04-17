from math import floor

x, y, z = map(int, input().split())

p = y / x

z_z = z * p

print(int(z_z) - 1 if abs(z_z - int(z_z)) < 1e-9 else int(z_z))