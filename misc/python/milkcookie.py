t = int(input())
for _ in range(t):
  n = int(input())
  l = list(map(str, input().split()))
  if (n == 1 and l[0] == "cookie") or l[n - 1] == "cookie":
    print("NO")
    continue
  flag = True
  for i in range(n - 1):
    if l[i] == "cookie" and l[i + 1] != "milk":
      flag = False
      break
  if not flag:
    print("NO")
    continue
  print("YES")
