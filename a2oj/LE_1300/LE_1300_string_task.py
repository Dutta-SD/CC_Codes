text = input()
print(''.join([f".{i.lower()}" for i in text if i not in "aeiouAEIOUyY"]))