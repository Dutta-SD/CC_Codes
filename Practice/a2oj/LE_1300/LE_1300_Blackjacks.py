card_count = {i : 4 for i in range(1,10)}
card_count[10] = 15
card_count[11] = 4
num = int(input())
print(card_count.get(num-10, 0))

