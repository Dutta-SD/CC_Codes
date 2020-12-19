import re
text = input()
flag = re.search(r"h\w*e\w*l\w*l\w*o", text)
print("YES" if flag else "NO")
