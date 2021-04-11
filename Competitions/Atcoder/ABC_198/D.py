# GETTING TLE
# Exhaistive Searching


def canSolve(expression):
    try:
        a = eval(expression)
        if a:
            s1 = expression.split('+')[0]
            s3 = expression.split('==')[-1]
            s2 = expression.split('+')[-1].split('==')[0]
            return a, s1, s2, s3
        return False, None, None, None

    except SyntaxError:
        return False, None, None, None
  
from itertools import product

s1 = input()
s2 = input()
s3 = input()

s = f"{s1}{s2}{s3}"
x = frozenset(s)

main_expression = f"{s1}+{s2}=={s3}"
# print(f"MAIN\t : {main_expression}")
# print(f"x is {x}")

a = [1, 2, 3, 4, 5, 6, 7, 8, 9]
values = [a for _ in range(len(x))]

# print("\n" ,values)

for item in product(*values):
    if len(set(item)) < len(item):
        continue
    expression = main_expression
    for idx, element in enumerate(x):
        # print(f"ELEMENT TO BE REPLACED : {element}, current expression = {expression}")
        expression = expression.replace(element, str(item[idx]))

    # print(f"Final Expression is : {expression}")
    status, s1_, s2_, s3_ = canSolve(expression)

    if status == True:
        print(s1_, s2_, s3_, sep="\n")
        break

else:
    print('UNSOLVABLE')