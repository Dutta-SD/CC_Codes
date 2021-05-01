n, D, H = map(float, input().split())
max_intercept = float(0)

for i in range(int(n)):
    d_i, h_i = map(float, input().split())
    intercept = H - (D) * ((H - h_i) / (D - d_i + 1e-10))
    max_intercept = max(intercept, max_intercept)

print(max_intercept)