t = int(input())

for _ in range(t):
  n, minx, maxx = map(int, input().split())
  l = []
  
  for _ in range(n):
    l.append(list(map(int, input().split())))
  result = []
  total = maxx - minx + 1
  
  for i in range(2):
    y = minx + i
    for i in range(n):
        y = y * l[i][0] + l[i][1]
    result.append(y)
    #print(y)

  if result[0] % 2 != result[1] % 2:
    if minx % 2 == 0 and total % 2 == 1:
      print(total // 2 + 1, total // 2)
    elif minx % 2 == 1 and total % 2 == 1:
      print(total // 2, total // 2 + 1)
    else:
      print(total // 2, total // 2)
  
  else:
    if result[0] % 2 == 0:
      print(total, 0)
    else:
      print(0, total)