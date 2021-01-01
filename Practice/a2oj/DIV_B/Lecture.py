n, m = map(int, input().split())
lang_map = {}
for i in range(m):
    w1, w2 = input().split()
    lang_map[w1] = min(w1, w2, key=len)

lecture = input()
print(" ".join([lang_map[w] for w in lecture.split()]))