def solve():
    vals = {
        '0': '0',
        '1': '1',
        '2': '5',
        '3': 'x',
        '4': 'x',
        '5': '2',
        '6': 'x',
        '7': 'x',
        '8': '8',
        '9': 'x'
    }


    h, m = map(int, input().split())
    t = input()
    # HH : MM
    t = t[::-1]

    t = ''.join([vals.get(i, ' ') for i in t])

    if 'x' in t:
        print()
        








for _ in range(int(input())):
    solve()