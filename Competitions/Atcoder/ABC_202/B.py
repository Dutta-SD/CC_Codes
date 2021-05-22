mp = {
    '0' : '0',
    '1'  :'1',
    '6' : '9',
    '8' : '8',
    '9' : '6'
}

txt = list(input())
txt = [mp[i] for i in txt]
txt.reverse()
print(*txt, sep='')