from heapq import heapify, heappop, heappush
def solve():
    new = []
    input()
    old = list(map(int, input().split()))
    heapify(old)
    while len(old) != 0:
        m_idx = old.index(max(old))
        new.extend(old[m_idx:])
        old = old[:m_idx]
    print(*new)



t = int(input())
for _ in range(t):
    solve()