t = int(input())
for _ in range(t):
  l = list(map(int, input().split()))
  s = set(l)
  if len(s) == 1:
    print("YES")
    continue
  flag = True
  for i in s:
    if l.count(i) != 2:
      flag = False
      break
  if not flag:
    print("NO")
  else:
    print("YES")