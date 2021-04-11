from difflib import SequenceMatcher

for _ in range(int(input())):
    string1 = input()
    string2 = input()
    match = SequenceMatcher(None, string1, string2).find_longest_match(0, len(string1), 0, len(string2))

    a = match.size

    print(string1.__len__() + string2.__len__() - a -a)