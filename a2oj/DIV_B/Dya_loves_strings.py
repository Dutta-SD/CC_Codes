from string import ascii_lowercase
import heapq

text = input()
text = list(text)
k = int(input())
weights = map(int, input().split())

n = len(text)

letter_weights = {i:j for i, j in zip(ascii_lowercase, weights)}

text_weights = [i * letter_weights[j] for i, j in enumerate(text, start=1)]

max_weight_to_be_added = max(letter_weights.values())

max_weight_to_be_added =  [max_weight_to_be_added * a for a in range(n+1, n+k+1)]
print(sum(text_weights + max_weight_to_be_added))