t = int(input())
for _ in range(t):
  n = int(input())
  x = list(map(int, input().split()))
  y = list(map(int, input().split()))
  first = 0
  second = 0
  for i in range(n):
    if i % 2 == 0:
      first += x[i]
      second += y[i]
    else:
      first += y[i]
      second += x[i]
  if first < second:
    print(first)
  else:
    print(second)