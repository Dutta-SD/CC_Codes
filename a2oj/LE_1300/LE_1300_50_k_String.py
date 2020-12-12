from collections import Counter

k = int(input())
text = input()
cntr = Counter(text)
reptext = ''

for key, cnt in cntr.items():
    if cnt % k:
        print(-1)
        exit(0)

    cntr[key] /= k
    reptext += key*int(cntr[key])

print(reptext*k)