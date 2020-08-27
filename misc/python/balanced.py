t = int(input())
for _ in range(t):
  easy, hard = 0, 0
  n, p = map(int, input().split())
  l = list(map(int, input().split()))
  for i in range(n):
    if l[i] >= p // 2:
      easy += 1
    elif l[i] <= p // 10:
      hard += 1
  if easy == 1 and hard == 2:
    print("yes")
  else:
    print("no")