input()

from heapq import heappop, heappush

colors = input().split()

queries = input().split()

who_has_zero = colors[0]

clr_dict ={key : [] for key in set(colors)}

# preprocess
for idx, clr in enumerate(colors):
    heappush(clr_dict[clr], idx)

for q in queries:
    idx = heappop(clr_dict[q])
    print((idx) + 1, end=" ")

    # pop 0
    new_position = heappop(clr_dict[who_has_zero])
    heappush(clr_dict[who_has_zero], idx)

    # newposition == 0
    heappush(clr_dict[q], new_position)

    who_has_zero = q