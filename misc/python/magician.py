for _ in range(int(input())):
  n, x, s = map(int, input().split())
  for _ in range(s):
    a, b = map(int, input().split())
    if a == x:
      x = b
    elif b == x:
      x = a
  print(x)
