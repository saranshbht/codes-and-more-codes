t = int(input())
for _ in range(t):
  flag = True
  n = int(input())
  l = list(map(int, input().split()))
  for i in range(n - 1):
    for j in range(i + 1, n):
      if (l[i] * l[j]) not in l:
        flag = False
        break
  if not flag:
    print("no")
  else:
    print("yes")