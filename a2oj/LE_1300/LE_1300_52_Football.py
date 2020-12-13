import re
lineup = input()
a = re.compile(r"(1{7}|0{7})")
flag = "NO" if re.search(a, lineup) is None else "YES"
print(flag)

