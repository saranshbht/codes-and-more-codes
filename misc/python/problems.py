p, s = map(int, input().split())
l = []
for x in range(p):
  sc = list(map(int, input().split()))
  ns = list(map(int, input().split()))
  for i in range(s - 1):
    for j in range(s - i - 1):
      swapped = False
      if sc[j] > sc[j + 1]:
        sc[j], sc[j + 1] = sc[j + 1], sc[j]
        ns[j], ns[j + 1] = ns[j + 1], ns[j]
        swapped = True
    if not swapped:
      break
  #print(sc,ns)
  
  count = 0
  for j in range(s - 1):
    if ns[j] > ns[j + 1]:
      count += 1
  l.append([count, x + 1])
#print(l)

for i in range(p - 1):
  if l[i][0] > l[i + 1][0]:
    l[i], l[i + 1] = l[i + 1], l[i]
  if l[i][0] == l[i + 1][0]:
    if l[i][1] > l[i + 1][1]:
      l[i], l[i + 1] = l[i + 1], l[i]

for i in range(p):
  print(l[i][1])
    