from collections import Counter

# debug = False

for t in range(int(input())):

    # print("-"*80) if debug else None
    #---------------------INPUT------------------
    a, b = map(int, input().split())
    s = list(input())
    counts = Counter(s)
    #---------------------------------------------

    # print(f"---> Count initial {counts}") if debug else None
    # print(f"a = {a}, b = {b}") if debug else None

    i = 0
    j = len(s) - 1

    while i <= j:
        if s[i] == s[j] and s[i] != '?':
            i += 1
            j -= 1
            continue
        
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
        else:
            if i == j:
                if a % 2 == 1 and b % 2 == 1:
                    counts['0'] = -1
                elif a % 2 == 1 and counts['0']+1 <= a:
                    s[i] = '0'
                    counts['0'] += 1

                elif b % 2 == 1 and counts['1']+1 <= b:
                    s[i] = '1'
                    counts['1'] += 1

                else:
                    counts['0'] = -1

            else:
                n = None
                if counts['0'] + 2 <= a:
                    n = '0'
                    s[i] = n
                    s[j] = n
                    # print(f"Position {i} : Character {s[i]}") if debug else None
                    # print(f"Position {j} : Character {s[j]}") if debug else None

                    counts[n] += 2

                elif counts['1'] + 2 <= b:
                    n = '1'
                    s[i] = n
                    s[j] = n
                    # print(f"Position {i} : Character {s[i]}") if debug else None
                    # print(f"Position {j} : Character {s[j]}") if debug else None

                    counts[n] += 2
                
                else:
                    counts['0'] = -1
        i += 1
        j -= 1

    # print(f"Counter is Now : {counts}") if debug else None


    # print(f"FINAL LIST IS : {s}") if debug else None
    
    if counts['1'] == b and counts['0'] == a:
        # print("Final Answer is: ") if debug else None

        print(''.join(s))
    else:
        # print("Final Answer is: ") if debug else None

        print(-1)

    # print("-"*80) if debug else None