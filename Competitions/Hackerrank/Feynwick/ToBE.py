genius = 0
t = int(input())
for i in range(t):
    m, p = map(int, input().split())
    
    if m < 3 or p < 3:
        # print("FAIL")
        continue

    avg = round((m + p) / 2, 3)

    # print("\n\nLOG")
    # print(f"MATHS : {m}, PHYSICS : {p}")
    # print(f"AVG  : {avg}")
    # print(avg - 7.50)
    # print("-"*80)



    if m == 10 or p == 10:
        if avg - 7.50 >= 0:
            # print("GOOD")
            genius += 1

# print(genius / t)
chance = round(genius / t, 3)

print("Genius" if chance >= 0.5 else "NotGeniusYet")