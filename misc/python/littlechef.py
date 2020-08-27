import math
t = int(input())
for _ in range(t):
  n = int(input())
  l = list(map(int, input().split()))
  minm = math.inf
  index = -1
  for i in range(1, n + 1):
    sumps = sum(l[:i]) + sum(l[i - 1:])
    if minm > sumps:
      minm = sumps
      index = i 
  print(index)