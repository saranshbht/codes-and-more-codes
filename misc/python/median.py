t = int(input())
for _ in range(t):
  n, k = map(int, input().split())
  l = list(map(int, input().split())
  )
  mid = (n + k) // 2
  l.sort()
  print(l[mid])