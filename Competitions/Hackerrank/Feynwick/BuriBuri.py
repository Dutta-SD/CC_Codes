
for i in range(int(input())):
    l, r = map(int, input().split())

    low = l + (9 - l % 10);
    high = r + (9 - l % 10) - 10 if r % 10 == 9 else r; 

    print(  (r - l  +1) * (  (high - low) // 10 + 1  ))