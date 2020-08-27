n, q = map(int, input().split())
l = list(map(int, input().split()))
minm = min(l)
maxm = max(l)
for _ in range(q):
  x = int(input())
  if x < minm or x > maxm:
    print("No")
  else:
    print("Yes")