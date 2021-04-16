from collections import Counter

for t in range(int(input())):

    #---------------------INPUT------------------
    a, b = map(int, input().split())
    s = list(input())
    counts = Counter(s)
    #---------------------------------------------

    # Additional check  
    flag = True

    # Initial counts
    if counts['0']  > a or counts['1'] > b or a + b != len(s):
        print(-1)
        continue

    if '?' not in s and s == s[::-1]:
        print(''.join(s))
        continue

    i = 0
    j = len(s) - 1

    # iterate, if center then handle separately
    while i < j:
        # 0 ? case, if unequal bad. Else nothing
        if s[i] in ['0', '1'] and s[j] in ['0', '1'] and s[i] != s[j]:
            # If unequal then action
            flag = False

        # Single ? case
        if (s[i] == '?' and s[j] != '?') or (s[j] == '?' and s[i] != '?'):
            if (s[i] == '?' and s[j] == '1'):
                s[i] = '1'
                counts['1'] += 1
                counts['?'] -= 1
    
            elif (s[j] == '?' and s[i] == '1'):
                s[j] = '1'
                counts['1'] += 1
                counts['?'] -= 1

    
            elif (s[j] == '?' and s[i] == '0'):
                s[j] = '0'
                counts['0'] += 1
                counts['?'] -= 1

    
            elif (s[i] == '?' and s[j] == '0'):
                s[i] = '0'
                counts['0'] += 1
                counts['?'] -= 1

        # Double Question mark case
        # Never do we get same position, so i != j
        if s[i] == '?' and s[j] == '?':
            if a - counts['0'] >= 2:
                s[i] = '0'
                s[j] = '0'
                counts['0'] += 2
                counts['?'] -= 2
            
            elif b - counts['1'] >= 2:
                s[i] = '1'
                s[j] = '1'
                counts['1'] += 2
                counts['?'] -= 2
            
            else:
                flag = False
        
        # Stepping of loop
        i += 1
        j -= 1

    # Center handling, if odd
    if len(s) % 2 == 1:
        position = int(len(s) / 2)
        if s[position] == '?':
            if a - counts['0'] == 1:
                s[position] = '0'
                counts['0'] += 1
                counts['?'] -= 1

            elif b - counts['1'] == 1:
                s[position] = '1'
                counts['1'] += 1
                counts['?'] -= 1

            else:
                flag = False



    if False:
        print(counts)


    if flag:
        if counts['0'] == a and counts['1'] == b:
            print(''.join(s))
        else:
            print(-1)
    else:
        print(-1)