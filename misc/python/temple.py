t = int(input())
for _ in range(t):
  n = int(input())
  l = list(map(int, input().split()))
  if n % 2 == 0 or l[0] != 1:
    print("no")
    continue
  flag = True
  for i in range(n - 1):
    d = l[i + 1] - l[i]
    if i < n // 2:
      if d != 1:
        flag = False
        break
    else:
      if d != -1:
        flag = False
        break
  if not flag:
    print("no")
    continue
  else:
    print("yes")
