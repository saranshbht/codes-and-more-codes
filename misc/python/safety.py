t = int(input())
case = 0
for j in range(t):
  case += 1
  x, y = 0, 0
  m, n = map(int, input().split())
  rx, ry = map(int, input().split())
  length = int(input())
  s = input()
  for i in s:
    if (i == 'U'):
      y += 1
    elif (i == 'D'):
      y -= 1
    elif (i == 'L'):
      x -= 1
    elif (i == 'R'):
      x += 1

  if x < 0 or x > m or y < 0 or y > n:
    print("Case " + str(case) + ": DANGER")
    continue
  if x == rx and y == ry:
    print("Case " + str(case) + ": REACHED")
    continue
  print("Case " + str(case) + ": SOMEWHERE")