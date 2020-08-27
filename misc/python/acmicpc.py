def greaterThan(a, b):
  flag = True
  count = 0
  for i in range(3):
    if a[i] < b[i]:
      flag = False
      break
    if a[i] > b[i]:
      count += 1
  if not flag or count < 1:
    return False
  else:
    return True

t = int(input())
for _ in range(t):
  l = []
  for i in range(3):
    l.append(list(map(int, input().split())))
  
  for i in range(len(l) - 1):
    for j in range(len(l) - i - 1):
      if greaterThan(l[j], l[j + 1]):
        l[j], l[j + 1] = l[j + 1], l[j]
  #print(l)
  flag = True
  for i in range(len(l) - 1):
      if not greaterThan(l[i + 1], l[i]):
        print("no")
        flag = False
        break
  if not flag:
    continue
  print("yes")
      