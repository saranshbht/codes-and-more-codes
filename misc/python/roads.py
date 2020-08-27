t = int(input())
for _ in range(t):
  a, b = map(int, input().split())
  if abs(a - b) > 2:
    print("NO")
    continue
  first, second = min(a, b), max(a, b)
  if first % 2 == 0:
    if second - first != 2:
      print("NO")
      continue
  else:
    if (second - first) > 2:
      print("NO")
      continue
  print("YES")