from collections import Counter
nums = Counter(input())

# print(nums)

sure = nums.get('o', 0)
q = nums.get('?', 0)

if sure > 4 : 
    print(0)

elif sure == 4:
    print(24)

elif sure == 3:
    print(24 * q  + 36)

elif sure == 2:
    print(12*q*q + 24*q + 14)

elif sure == 1:
    print(4*q*q*q + 6*q*q + 4*q + 1)

else:
    print(q**4)