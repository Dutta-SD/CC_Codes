classes = {
  0 : 0,
  1 : 0,
  2 : 0
}
n = input()
s = 0


for i in n:
  classes[int(i) % 3] += 1
  s += int(i)

# print(classes)

if s % 3 == 0:
  print(0)
elif classes[s % 3] == 0 and len(n) == 1:
  print(-1)
else:
  print(1)