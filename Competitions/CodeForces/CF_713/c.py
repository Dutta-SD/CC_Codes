from collections import Counter

for t in range(int(input())):
    debug = False
    print("-"*100) if debug else None
    a, b = map(int, input().split())
    s = list(input())
    counts = Counter(s)

    # if (a - counts['1']) + (b - counts['0']) != counts['?']:
    #     print("-1")
    #     continue

    print(f"---> Count initial {counts}") if debug else None

    i = 0
    j = len(s) - 1

    while i <= j:
        if s[i] in ['0', '1'] and s[j] in ['0', '1'] and s[i] != s[j]:
            counts['0'] = -1
            break
        if (s[i] == '?' and s[j] == '1'):
            s[i] = '1'
            counts['1'] += 1

        elif (s[j] == '?' and s[i] == '1'):
            s[j] = '1'
            counts['1'] += 1

        elif (s[j] == '?' and s[i] == '0'):
            s[j] = '0'
            counts['0'] += 1
        elif (s[i] == '?' and s[j] == '0'):
            s[i] = '0'
            counts['0'] += 1
        # double question mark
        elif s[i] == '?' and s[j] == '?':
            if i == j:
                n = None
                if counts['0'] + 1 <= a:
                    n = '0'
                elif counts['1'] + 1 <= b:
                    n = '1'
                
                if n == None:
                    counts['0'] = -1
                    break

                s[i] = n
                counts[n] += 1
            else:
                n = None
                if counts['0'] + 2 <= a:
                    n = '0'
                elif counts['1'] + 2 <= b:
                    n = '1'
                
                if n == None:
                    counts['0'] = -1
                    break
                s[i] = n
                s[j] = n
                print(f"s[i] == {s[i]}  : s[j] == {s[j]}") if debug else None
                counts[n] += 2

        i += 1
        j -= 1

    print(f"Final String is {s}") if debug else None
    print(f"Counter is Now : {counts}") if debug else None
    
    if counts['1'] == b and counts['0'] == a:
        print(''.join(s))
    else:
        print(-1)

    print("-"*100) if debug else None