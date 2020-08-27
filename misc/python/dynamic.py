from itertools import permutations
t = int(input())
for _ in range(t):
  l = input()
  s = set(l)
  if len(s) < 3:
    print("Dynamic")
    continue
  lst = []
  for i in s:
    lst.append(l.count(i))
  flag= True
  for i in permutations(lst):
    for j in range(len(lst) - 2):
      if i[j + 2] == i[j + 1] + i[j]:
        flag = False
        break
  if not flag:
    print("Dynamic")
  else:
    print("Not")