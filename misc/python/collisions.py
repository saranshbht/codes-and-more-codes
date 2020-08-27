t = int(input())
for _ in range(t):
  n, m = map(int, input().split())
  l = []
  collisions = 0
  for i in range(n):
    l.append(input())
  for i in range(n):
    for j in range(i + 1, n):
      for k in range(m):
        if l[i][k] == '1' and l[j][k] == '1':
          collisions += 1
  print(collisions)